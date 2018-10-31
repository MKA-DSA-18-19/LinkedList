#ifndef LIST_H
#define LIST_H

/* List.h
 * Fall 2018
 * Linked List "ADT"
 * Header File : include the headers for all methods
 */

#include "Node.h"

template <typename T>

class List{
  
 public:
  Node<T>* head;
  int size;
  
  explicit List(T element); // constructor
  
  ~List(); // destructor
  List(const List<T>& other); // copy constructor
  List<T>& operator=(const List<T>& other);// copy assignment

  
  bool isEmpty() const;
  bool insert(T element, int pos);
  void append(T element);
  T get(int pos);
  int getSize() const;
  bool remove(int pos);
  void print();
};
#endif
  
