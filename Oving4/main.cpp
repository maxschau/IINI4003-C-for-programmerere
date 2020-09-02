#include <iostream>
#include<vector>

using namespace std;
int main() {
    vector<int> numbers = {1,7, 8, 9, 10};


    for (auto number : numbers) {
        cout << number << endl;
    }

    cout << "-------" << endl;
    cout << numbers.front() << endl; //front() returns the first element of the vector
    cout << numbers.back() << endl;  //back() returns the last element of the vector

    //Verifying that they are lying at the same address in menory
    cout << &numbers[0] << endl;
    cout << &numbers.front() << endl;

    cout << &numbers[4] << endl;
    cout << &numbers.back() << endl;

    //Trying the emplace function
    numbers.emplace(numbers.begin() + 1, 10);
    cout << numbers.front() << endl;

    cout << "------------" << endl;
    for (auto number : numbers) {
        cout << number << endl;
    }

    //Trying out the find() function
    vector<int>::iterator it;
    int findValue = 7;
    it = find(numbers.begin(), numbers.end(), findValue);
    if (it != numbers.end()) {
        cout << "Found value: " << findValue << " at position: " << it-numbers.begin() << endl;
    } else {
        cout << "Did not find value: " << findValue << endl;
    }







    return 0;
}
