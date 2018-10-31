#ifndef NODE_H
#define NODE_H

#include <iostream>

/* Node header file
 * Fall 2018
 */

template <class T>

class Node{
 private:
  T element;
  Node<T>* next;
  
 public:
  explicit Node(T elt){
    element = elt;
    next = NULL;
  }
  explicit Node(T elt, Node<T>* n){
    element = elt;
    next = n;
  }
  ~Node(){ //destructor
    delete next;
  }
  Node(const Node<T>& other){ //copy constructor
    element = other.getElement();
    next = new Node<T>(other.getElement(), other.getNext());
  }
  Node<T>& operator= (const Node<T>& other); //copy assignment

  T getElement(){ return element; }

  Node<T>* getNext(){ return next; }

  void setElement(T elt){ element = elt; }

  void setNext(Node<T>* n){ next = n; }
};

#endif
