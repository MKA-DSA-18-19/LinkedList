/* Node.cpp
 * Fall 2018
 */

#include "Node.h"
#include <iostream>

template <class T>

Node<T>::Node(T elt){
    element = elt;
    next = nullptr;
  }
template <class T>
Node<T>::Node(T elt, Node<T>* n){
    element = elt;
    next = n;
  }

template <class T>
Node<T>::~Node(){
  delete next;
}

template <class T>
Node<T>::Node(const Node<T>& other){
  element = other.getElement();
  next = new Node<T>(other.getElement(), other.getNext());
}

template <class T>
Node<T>& Node<T>::operator= (const Node<T>& other){
  element = other.getElement();
  next = new Node<T>(other.getElement(), other.getNext());

}


template <class T>
T Node<T>::getElement(){ return element; }
template <class T>
Node<T>* Node<T>::getNext(){ return next; }
template <class T>
void Node<T>::setElement(T elt){ element = elt; }
template <class T>
void Node<T>::setNext(Node<T>* n){ next = n; }

