//
// Created by Max Torre Schau on 12/08/2020.
//

#include <iostream>

using namespace  std;

int main() {
    int a = 5;
    int &b = a;
    int *c;
    c = &b;
    *&a = *&b + *c;
    *&b = 2;


    //declaration of reference variable 'b' requires an initializer
    //Vi forsøker å erklære en referanse uten at vi vet hvilken variabel den refererer til.
    //Løses ved å sette int &b = a;

    //indirection requires pointer operand ('int' invalid)
    //b er en referanse, og ikke en int. Derfor må vi finne verdien til referansen b.
    //Løses ved at vi henter ut verdiene: *&a = *&b + *c.


    //expression is not assignable
    //&b er en referanse, og da måtte vi ha hatt en variabel etter likhetstegnet.
    //Endrer til *&b = 2. Da vil a = 2.
    return 0;
}


