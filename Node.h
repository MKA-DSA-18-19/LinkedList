#ifndef NODE_H
#define NODE_H

/* Node header file
 * Fall 2018
 */

template <class T>

class Node{
 private:
  T element;
  Node<T>* next;
  
 public:
  explicit Node(T elt);
  explicit Node(T elt, Node* n);
  ~Node(); //destructor
  Node(const Node<T>& other); //copy constructor
  Node<T>& operator= (const Node<T>& other); //copy assignment

  T getElement();

  Node<T>* getNext();

  void setElement(T elt);

  void setNext(Node<T>* n);
};

#endif
