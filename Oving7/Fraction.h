//
// Created by Max Torre Schau on 08/10/2020.
//

#ifndef OVING7_FRACTION_H
#define OVING7_FRACTION_H

#pragma once

class Fraction {
public:
    int numerator;
    int denominator;

    Fraction();
    Fraction(int numerator, int denominator);
    void set(int numerator_, int denominator_ = 1);
    Fraction operator+(const Fraction &other) const;
    Fraction operator-(const Fraction &other) const;
    Fraction operator*(const Fraction &other) const;
    Fraction operator/(const Fraction &other) const;
    Fraction operator-() const;
    Fraction &operator++(); // Preinkrement
    Fraction &operator--(); // Predekrement
    Fraction &operator+=(const Fraction &other);
    Fraction &operator-=(const Fraction &other);
    Fraction &operator*=(const Fraction &other);
    Fraction &operator/=(const Fraction &other);
    Fraction &operator=(const Fraction &other);
    bool operator==(const Fraction &other) const;
    bool operator!=(const Fraction &other) const;
    bool operator<=(const Fraction &other) const;
    bool operator>=(const Fraction &other) const;
    bool operator<(const Fraction &other) const;
    bool operator>(const Fraction &other) const;
    friend Fraction operator-(int integer, const Fraction &fraction2);
    Fraction operator-(int integer) const;

private:
    void reduce();
    int compare(const Fraction &other) const;
};


#endif //OVING7_FRACTION_H
