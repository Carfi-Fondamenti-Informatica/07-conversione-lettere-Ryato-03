//
// Created by lofal on 06/12/2022.
//

#include<iostream>
#include "lib.h"

bool Car(char &x) {
    if (x >= 97 && x <= 122) {
        x = x - 32;
        return true;
    }
    else if (x >= 65 && x <= 90) {
        x+=32;
        return true;
    }
    else return false;
}
