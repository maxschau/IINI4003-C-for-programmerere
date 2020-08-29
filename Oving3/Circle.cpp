//
// Created by Max Torre Schau on 26/08/2020.
//

#include "Circle.h"

// ==> Implementasjon av klassen Circle

Circle::Circle(double radius_) : radius(radius_) {} //Removed public and changed to :radius(radius_)

double Circle::get_area() const {      //Added const
    return pi * radius * radius;
}

double Circle::get_circumference() const {          //Made return type double
    double circumference = 2.0 * pi * radius;       //Circumference needed datatype
    return circumference;
}
