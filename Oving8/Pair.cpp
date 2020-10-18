//
// Created by Max Torre Schau on 18/10/2020.
//

#ifndef OVING8_PAIR_H
#define OVING8_PAIR_H

template <class type, class type2>
class Pair {
public:
    type first;
    type2 second;
    Pair(type first, type2 second) {
        this->first = first;
        this->second = second;
    }

    Pair operator+(const Pair &other) {
        Pair pair = *this;
        pair.first += other.first;
        pair.second += other.second;
        return pair;
    }

    bool operator>(const Pair &other) {
        return (compare(other) == 1);

    }

    int compare(const Pair &other) {
        type sum = first + second;
        type sumOther = other.first + other.second;
        type difference = sum - sumOther;

        if (difference > 0) return 1;
        else if (difference == 0) return 0;
        else return -1;
    }
};


#endif //OVING8_PAIR_H
