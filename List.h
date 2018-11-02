#ifndef LIST_H
#define LIST_H

/* List.h
 * Fall 2018
 * Linked List "ADT"
 * Header File : include the headers for all methods
 */

#include "Node.h"

template <typename T>

// Because templating is being used all source code needs
// to be in the .h file because of the way the files
// are linked by the compiler 

class List{
  
 public:
  Node<T>* head;
  int size;
  
  explicit List(T element){ // constructor
    head = new Node<T>(element);
    size = 1;
  }
  
  ~List(){// destructor  
    Node<T>* current = head;
    while (current != nullptr){
      Node<T>* old = current;
      current = current->getNext();
      delete old;
    }
  }

  
  List(const List<T>& other){ // copy constructor
    if (other.isEmpty()) { head = nullptr; size = 0; }
    else{
      Node<T>* otherCurr = other.head;
      head = new Node<T>(other.head->getElement());
      Node<T>* curr = head;
      while (otherCurr->getNext() != NULL){
	otherCurr = otherCurr ->getNext();
	curr -> setNext(new Node<T>(otherCurr->getElement(),
				    otherCurr->getNext()));
	curr = curr -> getNext();
      }
    }
  }   
  
  List<T>& operator=(const List<T>& other){// copy assignment
    if (other.isEmpty()) { head = nullptr; size = 0; }
    else{
      Node<T>* otherCurr = other.head;
      head = new Node<T>(other.head->getElement());
      Node<T>* curr = head;
      while (otherCurr->getNext() != NULL){
	otherCurr = otherCurr ->getNext();
	curr -> setNext(new Node<T>(otherCurr->getElement(),
				    otherCurr->getNext()));
	curr = curr -> getNext();
      }
    }
    return *this;
  }
  
  bool isEmpty() const{
    return size == 0;
  }
  bool insert(T element, int pos){
    if(pos > size || pos < 0){ return false; }
    
    Node<T>* cur = head;
    Node<T>* julia;
    
    if(pos == 0) {
      julia = new Node<T>(element, head);
      head = julia;
      size++;
      return true;
    }
    
    for(int i = 0; i < pos - 1; i++){
      cur = cur->getNext();
    }
    
    
    Node<T>* next = cur->getNext();
    julia = new Node<T>(element, next);
    cur->setNext(julia);
    
    size++;
    
    return true;
  }
    
    
  void append(T element){ insert(element, size); }
  T get(int pos){
    if (size == 0 || pos >= size)
      return 0;
    Node<T>* c = head; 
    for(int i = 0; i < pos; i++){
      c=c->getNext();
    }
    return c->getElement();
  }
  
  int getSize() const{ return size; }
  
  bool remove(int pos){
    if(pos > size) {return false;}
    Node<T>* casey = head;
    Node<T>* tbd;
    if(pos == 0){
      tbd = head;
      head = tbd->getNext();
      delete tbd;
      size--;
      return true;
    }
    for (int i = 0; i < pos - 1; i++){
      casey = casey->getNext();
    }
    if (pos == size - 1){
      delete casey->getNext();
      casey->setNext(nullptr);
      size--;
      return true;
    }
    tbd = casey->getNext();
    casey->setNext(tbd->getNext());
    delete tbd;
    size--;
    return true;
  }
  
  void print(){
    for (Node<T>* cur = head; cur!=nullptr; cur=cur->getNext())
      std::cout << cur->getElement() << " ";
    std::cout << std::endl;
  }
};
#endif
  
