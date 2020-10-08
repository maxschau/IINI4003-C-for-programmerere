#include <iostream>
#include "Fraction.h"

using namespace std;
void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}
int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    b += a;
    ++c;
    d *= d;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    c = -c;

    print("c = ", c);

    if (a + b != c + d)
        cout << "a + b != c + d" << endl;
    else
        cout << " a + b == c + d" << endl;
    while (b > a)
        b -= a;
    print("b = ", b);

    // Testing a)
    Fraction fraction1(2,3);
    Fraction fraction2 = fraction1 - 1;
    print("Fraction 2: ", fraction2);

    Fraction fraction3= 1- fraction1;
    print("Fraction 3: ", fraction3);

    //1b)
    // Ser gjennom de ulike leddene
    // 5-3 = 2
    // 2-a = 2-(1/2) = 1, rundes ned til heltall
    // 1-7= -6
    // -6-b = -6-(1/4) = -6, rundes ned til heltall
    print("b: ", 5 - 3 - a - 7 - b);



    return 0;
}
