/*
CH-230-A
stack.h
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
using namespace std;

template <typename T>
class Stack { // Template class for the stack
    private:
        // Declaring the variables
        T *arr;  
        int size;
        int count;
    public:
        Stack() { // Empty constructor
            size = 10;
            count = 0;
            arr = new T[size];
        }

        ~Stack() { // Destructor
            delete[] arr;
        }

        Stack(const Stack& a){ // Copy constructor
            size = a.size;
            count = a.count;
            arr = new T[size];
            for (int i = 0; i != size; i++) {
                arr[i] = a.arr[i]; 
            }
        }


        Stack(int newsize) { // Setter for size
            size = newsize;
            count = 0;
            arr = new T[size];
        }

        bool push(T ele) { // method to push element
            if (count >= size) {
                return false;
            }
            else {
                arr[count++] = ele;
                return true;
            }
        }

        bool pop(T& out) { // method to pop element
            if (count == 0) {
                return false;
            }
            else {
                out = arr[--count];
                return true;
            }
        }

        T back() { // method to get element on the top
            if (count == 0) {
                exit(1);
            }
            return arr[count - 1];
        }

        int getNumEntries(){ // getter for size of stack
            return (count);
        }
};






