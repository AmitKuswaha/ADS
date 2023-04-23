/*
CH-231-A
vector.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<string> words; // Creating string vector object
    string inp;
    int count = 0;

    cout << "Enter the word: " << inp << endl;
    cin >> inp;

    while(inp != "end") {
        count++; // counter
        words.push_back(inp);
        cin >> inp;
    } // Reading the words till the word is "end"

    cout << endl << "Printing words using index operator" << endl;
    for (int i = 0; i != count; i++) {
        cout << words[i] << " ";
    }  // Printing the data separated by spaces

    cout << endl << endl << "Printing words using iterator" << endl;
    vector<string>::iterator run;
    for (run = words.begin(); run != words.end(); run++) {
        cout << *run;
        if ( (run + 1) != words.end()) {
            cout << ",";
        }
    }  // Printing the data separated by , using iterator
    return 0;

}
