/*
CH-231-A
arr.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/
#include <iostream>
using namespace std;

template <typename T1, typename T2>
int array_search(T1 arr[], int size, T2 ele) {
    int i;
    for (i = 0; i != size; i++) {
        if (arr[i] == ele) {
            return i;
        }
    }
    return -1;
} // Template function to return the position of element


template <class T1>
class complex {
    private:
        T1 real;
        T1 img;
    public:
        complex() { // Empty constructor
            real = 0;
            img = 0;
        }
        complex(T1 nreal, T1 nimg) { // Constructor with parameters
            real = nreal;
            img = nimg;
        }

        complex& operator ()(T1 nreal, T1 nimg) {
                                        // Defining  and describing () operator
	        this->real = nreal;
	        this->img = nimg;
	        return *this;
        
        }
        bool operator ==(const complex &a) {
                                        // Defining and describing == operator
            return (this->real == a.real && this->img == a.img);
        }
}; // Complex class

int main() {
    int a[5] = {2, 9, 7, 10, 6}; // Array of intergers
    char b[5] = {'a', 'x', 'j', 'i', 'm'}; // Array of characters
    complex<int> comp[5]; // Array of complex objects
    int i;
    int j = 9;
    for (i = 0; i != 5; i++) {
        comp[i](i, j);
        j--;
    } // Loops and creates complex objects
    complex<int> che(3, 6); // Creating a int complex object

    // Calling the template function to search element in the array
    cout << "The position is " << array_search<int, int>(a, 5, 9) << endl;
    cout << "The position is " << array_search<char, char>(b, 5, 'i') << endl;
    cout << "The position is " 
        << array_search< complex<int>, complex<int> >(comp, 5, che) << endl;
    return 0;
}

