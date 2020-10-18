#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

template <class type>
bool equals(type a, type b) {
    return a == b;
}

bool equals(double a, double b) {
    const double MARGIN = 0.00001;

    return (abs(a - b) < MARGIN);
}




int main() {
    double number1 = 1.1;
    double number2 = 0.1;
    if (equals(number1, number2)) {
        cout << number1 << " and " << number2 << " are equal" << endl;
    } else {
        cout << number1 << " and " << number2 << " are not equal" << endl;
    }

    setprecision(8);
    double number3 = 2.000001;
    double number4 = 2.0000012;
    if (equals(number3, number4)) {
        cout << number3 << " and " << number4 << " are equal" << endl;
    } else {
        cout << number3 << " and " << number4 << " are not equal" << endl;
    }


    string string1 = "This is a string";
    string string2 = "This is a string";

    if (equals(string1, string2)) {
        cout << "The strings are equal" << endl;
    } else {
        cout << "The strings are not equal" << endl;
    }

    string string3 = "This is a string";
    string string4 = "This is also a string";

    if (equals(string3, string4)) {
        cout << "The strings are equal" << endl;
    } else {
        cout << "The strings are not equal" << endl;
    }
    return 0;
}
