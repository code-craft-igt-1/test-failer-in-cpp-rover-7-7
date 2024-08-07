#include <assert.h>
#include <iostream>
#include<string>
#include "tshirts.h"
using std::string;;

char size_measure(int cms) {
    char sizeName = '\0';
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}  // function size_measure