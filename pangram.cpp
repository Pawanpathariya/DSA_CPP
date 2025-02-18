#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool isPangram(string& str) {
    unordered_set<char> alphabet;
    for ( auto c : str) {
        if (isalpha(c)) { 
            alphabet.insert(tolower(c)); 
        }
    }
    return alphabet.size() == 26;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    if (isPangram(input)) {
        cout << "The sentence is a pangram.\n";
    } else {
        cout << "The sentence is not a pangram.\n";
    }

    return 0;
}
