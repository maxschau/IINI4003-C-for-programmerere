//
// Created by Max Torre Schau on 12/08/2020.
//

#include <iostream>

using namespace  std;

int main() {
    double number;

    //Peker til variabelen number
    double *pointerToNumber = &number;

    //Referanse til number
    double &referenceToNumber = number;


    referenceToNumber = 6.0;
    cout << number << endl;

    number = 8.0;
    cout << number << endl;

    *pointerToNumber = 12.0;
    cout << number << endl;

    return 0;
}
