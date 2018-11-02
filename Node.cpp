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
T Node<T>::getElement() const { return element; }
template <class T>
Node<T>* Node<T>::getNext() const { return next; }
template <class T>
void Node<T>::setElement(T elt) { element = elt; }
template <class T>
void Node<T>::setNext(Node<T>* n){ next = n; }

