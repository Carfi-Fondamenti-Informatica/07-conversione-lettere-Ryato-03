#include <iostream>
#include "lib.h"
using namespace std;

bool Car(char &x);
int main() {
    char val;
    cin >> val;

    if  (Car(val)) cout << (char)val;
    else cout << "errore";

    return 0;
}
