//
// Created by Max Torre Schau on 26/08/2020.
//

#ifndef OVING3_CIRCLE_H
#define OVING3_CIRCLE_H

const double pi = 3.141592;

class Circle {
public:
    Circle(double radius_); //Changed from lower-case to Upper-case C
    double get_area() const;
    double get_circumference() const;
private:                    //Moved private to its own line
    double radius;
};

#endif //OVING3_CIRCLE_H
