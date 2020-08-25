//
// Created by Max Torre Schau on 12/08/2020.
//

#include <iostream>

using namespace std;

int find_sum(const int *table, int length);


int main() {
    int arrayOfNumbers[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    //De 10 første tallene
    cout << "Sum: " << find_sum(arrayOfNumbers, 10) << endl;

    //De  5 neste
    cout << "Sum: " << find_sum(&arrayOfNumbers[10],5) << endl;

    //De 5 siste
    cout << "Sum: " << find_sum(&arrayOfNumbers[15],5) << endl;


    return 0;
}

int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += table[i];
    }

    return sum;
}
