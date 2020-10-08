//
// Created by Max Torre Schau on 08/10/2020.
//

#include "Set.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

Set::Set() {}

Set Set::operator+(const Set &other) const {
    Set set = *this;
    for (size_t i = 0; i < other.numbers.size(); ++i) set += other.numbers[i];
    return set;
}

Set &Set::operator+=(int integer) {
    //Finding the number first because we dont want any duplicates
    bool numberExists = false;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == integer) {
            numberExists = true;
            break;
        }
    }
    if (!numberExists) {
        this->numbers.emplace_back(integer);
        return *this;
    } else {
        return *this;
    }
}
// Setting a set equal to another set
Set &Set::operator=(const Set &other) {
    numbers = other.numbers;
    return *this;
}
//To print out
ostream &operator<<(ostream &stream, const Set &set) {
    if (set.numbers.size() == 0) return stream << "{}";
    stream << "{";
    for (size_t i = 0; i < set.numbers.size() - 1; ++i) stream << set.numbers[i] << ", ";
    stream << set.numbers[set.numbers.size() - 1] << "}";
    return stream;
}
