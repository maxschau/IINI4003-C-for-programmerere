//
// Created by Max Torre Schau on 08/10/2020.
//
#include <iostream>
#include "oppgave2.h"
#include "Set.h"

using namespace std;
int main() {
    Set set1;
    Set set2;

    set1 += 2;
    cout << "set1 " << set1 << endl;
    set1 += 3;
    cout << "set1 " << set1 << endl;
    set1 += 2;
    cout << "set1: " << set1 << endl;
    set2 += 15;
    cout <<"set2: " << set2 << endl;
    set2 += 3;
    cout <<"set2: " << set2 << endl;

    Set set3 = set1 + set2;
    cout << "Set3: " << set3 << endl;

    set2 = set3;
    cout << "Set2: " << set2 << endl;
    return 0;
}
