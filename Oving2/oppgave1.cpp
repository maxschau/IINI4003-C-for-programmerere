#include <iostream>

using namespace  std;
int main() {

    int i = 1;
    int j = 5;

    int *p = &i;
    int *q = &j;

    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    cout << "&i: " << &i << endl;
    cout << "&j: " << &j << endl;
    cout << "&p: " << &p << endl;
    cout << "&q: " << &q << endl;

    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    cout << *p << " " << *q << endl;

    return 0;
}
