#ifndef LIST_H
#define LIST_H

/* List.h
 * Fall 2018
 * Linked List "ADT"
 * Header File : include the headers for all methods
 */

#include "Node.cpp"

template <typename T>

class List{
 private:
  Node<T>* head;
  int size;
  
 public:
  explicit List(T element); // constructor
  
  ~List(); // destructor
  List(const List<T>& other); // copy constructor
  List<T>& operator=(const List<T>& other);// copy assignment

  
  bool isEmpty();
  bool insert(T element, int pos);
  void append(T element);
  T get(int pos);
  int getSize();
  bool remove(int pos);
  void print();
};
#endif
  
