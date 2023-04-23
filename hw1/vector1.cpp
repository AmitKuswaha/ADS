/*
CH-231-A
vector1.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<string> words; // Creating a string vector
    string inp;
    int count = 0;

    cout << "Enter the word: " << inp << endl;
    getline(cin, inp);

    while(inp != "end") {
        count++;
        words.push_back(inp);
        cin >> inp;
    } // Reading the word till the word is "end"

    if (count >= 5) {
        swap(words[1], words[4]);
    }
    else {
        cout << endl << "Swap not possible" << endl;
    } // if there is 2nd and 5th elements, than swaps them

    words[count-1] = "???"; // Updating the last element

    cout << endl << "Printing words using index operator" << endl;
    for (int i = 0; i != count; i++) {
        cout << words[i];
        if (words[i] != words[count - 1]) {
            cout << ",";
        }
    }  // Printing the data separated by comma

    cout << endl << endl << "Printing words using iterator" << endl;
    vector<string>::iterator run;
    for (run = words.begin(); run != words.end(); run++) {
        cout << *run;
        if ( (run + 1) != words.end()) {
            cout << ":";
        }
    } // Printing the data separated by : using iterator

    cout << endl << endl << "Printing words using reverse iterator" << endl;
    vector<string>::reverse_iterator rrun;
    for (rrun = words.rbegin(); rrun != words.rend(); rrun++) {
        cout << *rrun << " ";
    }  // Printing the data in reverse separated by spaces 
    return 0;

}
