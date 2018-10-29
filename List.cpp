/* Linked List
 * Fall 2018
 * DSA
 */

#include "List.h"
#include <iostream>

using namespace std;

template < class T >
List<T>::List(T element){
  head = new Node<T>(element);
  size = 1;
}

template <class T>
// destructor
List<T>::~List(){
  delete head;
}

template <class T>
// copy constructor
List<T>::List(const List<T>& other){
  // call copy construcotr on 
  
  // finish
  
}
template <class T>
List<T>& List<T>::operator= (const List<T>& other){
  //fill in
  //call copy assignment on members

  // convention is to always return *this
  return *this;
}

template < class T >
bool List<T>::isEmpty(){
  return (size == 0);  
}

template < class T >
bool List<T>::insert(T element, int pos){
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

template < class T>
void List<T>::append(T element){
  insert(element, size);
}


template < class T > 
T List<T>::get(int pos){
  if (size == 0 || pos >= size)
    return 0yeah
      ;
  Node<T>* c = head; 
  for(int i = 0; i < pos; i++){
    c=c->getNext();
  }
  return c->getElement();
}


template < class T >
int List<T>::getSize(){
  return size;
}

template < class T >
void List<T>::print(){
  for (Node<T>* cur = head; cur!=nullptr; cur=cur->getNext())
    cout << cur->getElement() << " ";
  cout << endl;
}
  

template < class T >
bool List<T>::remove(int pos){
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


int main(){
  List<int> peter = List<int>(7);
  peter.append(1);
  peter.insert(1,0);
  peter.insert(3,1);
  cout << "Trying to insert past end " << peter.insert(7, 10) << endl;
  peter.insert(56,peter.getSize());
  peter.print();
  cout << "Get the 2nd position, it should be 7: " << peter.get(2) << endl;
  cout << peter.getSize() << endl;
  peter.remove(0);
  peter.print();
  peter.remove(peter.getSize()-1);
  peter.print();
  peter.remove(1);
  peter.print();
};




  
  
  
