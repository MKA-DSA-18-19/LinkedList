/* Linked List
 * Fall 2018
 * DSA
 */

#include "List.h"
#include <iostream>

using namespace std;

int main(){
  List<int> peter = List<int>(7);
  peter.append(1);
  peter.insert(1,0);
  peter.insert(3,1);

  List<int> list2 = peter;
  list2.print();
  peter.remove(0);
  peter.print();
  peter.head->getNext()->setElement(100);
  peter.print();
  list2.print();
  
  /* // using destructor
  List<int>* l = new List<int>(10);
  delete l;*/

};




  
  
  
