//
// Created by Max Torre Schau on 08/10/2020.
//

#ifndef OVING7_SET_H
#define OVING7_SET_H
#include <iostream>
#include <vector>

using namespace std;
class Set {
public:
    Set();
    Set operator+(const Set &other) const;
    Set &operator+=(int integer);
    Set &operator=(const Set &other);
    friend ostream &operator<<(ostream &stream, const Set &set);

private:
    vector<int> numbers;
};

#endif //OVING7_SET_H
