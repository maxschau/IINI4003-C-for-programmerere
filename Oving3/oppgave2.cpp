//
// Created by Max Torre Schau on 26/08/2020.
//

#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle circle(5);

    double area = circle.get_area();
    cout << "Arealet er lik " << area << endl;

    double circumference = circle.get_circumference();
    cout << "Omkretsen er lik " << circumference << endl;
}

