/*
CH-231-A
testLinkedList.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/
#include "linkedlist.h"

int main() {
  cout << endl << "Using int type" << endl << endl;

  LinkedList<int> list0; // Creating an int linkedlist object
  // Adding the elements to the list
  list0.push_front(8);
  list0.push_front(7);
  list0.push_front(15);
  list0.push_front(19);
  list0.push_back(21);
  
  // Printing the front and back element of the list
  cout << "Front data: " << list0.front() << endl;
  cout << "Back data: " << list0.back() << endl;
  

  // Removing and printing the back and front element of the list
  cout << "Removing from back: " << list0.rem_back() << endl;
  cout << "Removing from front: " << list0.rem_front() << endl;

  // Adding more elements
  list0.push_back(56);
  list0.push_front(95);
  list0.push_back(99);

  // Printing the front and back element of the list
  cout << "Front data: " << list0.front() << endl;
  cout << "Back data: " << list0.back() << endl;
  
  // Printing the size of the list
  cout << "Size of the list0: " << list0.getSize() << endl << endl;

  // Creating an int linkedlist object
  cout << "Using String type" << endl << endl;
  // Adding the elements to the list
  LinkedList<string> list1;
  list1.push_front("Amit");
  list1.push_front("Anshu");
  list1.push_front("Amish");
  list1.push_front("Rajan");
  list1.push_back("Sunny");
  
  // Printing the front and back element of the list
  cout << "Front data: " << list1.front() << endl;
  cout << "Back data: " << list1.back() << endl;
  
  // Removing and printing the back and front element of the list
  cout << "Removing form back: " << list1.rem_back() << endl;
  cout << "Removing from front: " << list1.rem_front() << endl;

  // Adding more elements
  list1.push_back("Aditya");
  list1.push_front("Shubham");
  list1.push_back("Lalit");
  cout << "Removing from front: " << list1.rem_front() << endl;
  
  // Printing the front and back element of the list
  cout << "Front data: " << list1.front() << endl;
  cout << "Back data: " << list1.back() << endl;
  
  cout << "Size of the list1: " << list1.getSize() << endl << endl;
  
  return 0;
}
