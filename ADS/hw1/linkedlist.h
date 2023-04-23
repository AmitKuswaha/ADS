/*
CH-231-A
linkedlist.h
Amit Kushwaha
amkushwaha@jacobs-university.de
*/
#include <iostream>
using namespace std;

template<typename T>
class LinkedList { // Template class for doubly linked list
private:
    // Declaring the variables
    struct Node { // Declaring a node datatype
        T data;
        Node *next;
        Node *prev;

        Node(T ndata) {
            data = ndata;
            next = NULL;
            prev = NULL;
        }
    };

    Node *head;
    Node *tail;
    int size;

public:
    LinkedList() { // Empty constructor 
        head = NULL;
        tail = NULL;
        size = 0;
    }

    ~LinkedList() { // Destrutor
        Node* temp;
        while(head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
      } // Releasing the list memory
      cout<<"All nodes are deleted successfully.\n";
    }

    T front() { // Method to return the first element
        if (head == NULL) {
            exit(0);
        } // Exits if the list is empty
        return head->data;
    }

    T back() { // Method to return the second element
        if (head == NULL) {
            exit(0);
        } // Exits if the list is empty
        return tail->data;
    }

    T rem_front() { // Method to remove first element
        if (head == NULL) {
            exit(0);
        } // Exits if the list is empty

        T ele = head->data;
        Node *temp = head;
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
        size--; // Update the size
        return ele;
    }

    T rem_back() { // Method to remove the last element
        if (head == NULL) {
            exit(0);
        } // Exits if the list is empty
        T ele = tail->data;
        Node *temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
        size--; // Updates the size
        return ele;
    }

    void push_front(T data) { // Method to add element on front
        Node* newnode = new Node(data); // Creating newnode
        
        newnode->next = head; // Assigning head as the next element of newnode
        if (head != NULL) { // Executes only if list is not null
            head->prev =  newnode; // Assinging newnode as the prev element
        }
        head = newnode; // Assining newnode as head
        
        size++; // Update the size
    }
    
    void push_back(T data) { // Method to add element on back
        Node* temp = head;
        Node* newnode = new Node(data);
        if (head == NULL) { // Executes if list is empty
            push_front(data); // Calls push_front method
        }
        else{
            while(temp->next!= NULL){
                temp = temp->next;
            } //Executes till reaches the last element
            temp->next = newnode; // Assigns newnode as the last element
            newnode->prev = temp; // Assigns previous pointer of newnode
        }
        tail = newnode; // Assinging newnode as tail
        
        size++; // Update the size
            
    }
   

    int getSize() { // method to return the size of list
        return size;
    }
};

