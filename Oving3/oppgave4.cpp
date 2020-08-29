//
// Created by Max Torre Schau on 26/08/2020.
//

#include "oppgave4.h"
#include <iostream>

using namespace std;

int main() {
    //Task A:
    string word1, word2, word3;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    //Task B
    string sentence;
    sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << sentence << endl;

    //Task C
    cout << word1.length() << endl;
    cout << word2.length() << endl;
    cout << word3.length() << endl;
    cout << sentence.length() << endl;

    //Task D
    string sentence2;
    sentence2 = sentence;

    //Task E
    if (sentence2.length() >= 12) {
        sentence2.replace(9, 3, "xxx");
    }
    cout << sentence2 << endl;

    //Task F
    if (sentence.length() >= 5) {
        string sentence_start = sentence.substr(0,5);
        cout << sentence << endl;
        cout << sentence_start << endl;
    }

    //Task G
    string search = "hallo";
    size_t found = sentence.find(search);
    if (found!=string::npos) {
        cout << "Hallo found" << endl;
    } else {
        cout << "Did not find hallo" << endl;
    }

    //Task H
    string search2 = "er";
    size_t found2 = sentence.find(search2);
    while (found2 != string::npos) {
        cout << "Found 'er' on index " << found2 << endl;
        found2 = sentence.find(search2, found2 + 1);
    }

    return 0;
}


