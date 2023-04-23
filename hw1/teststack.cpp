/*
CH-230-A
teststack.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/
#include "stack.h"

int main()
{

    Stack<int> s; // Creating a stack object
    // Putting the elements in the stack
    s.push(55);
    s.push(44);
    s.push(33);
    s.push(22);
    s.push(11);
    Stack<int> s1(s); // Creating a copy of first stack

    int out;
    while (s.pop(out))
    {
        cout << out << endl;
    } // Prints the first stack


    cout << "Data on the top: " << s1.back() << endl; 
                                    // Prints the top element of second stack
    cout << "Number of entries: " << s1.getNumEntries() << endl;
                                     // Prints the size of second stack
    return 0;
}
