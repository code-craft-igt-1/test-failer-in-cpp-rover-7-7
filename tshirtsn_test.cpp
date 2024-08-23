#include <assert.h>
#include <iostream>
#include <vector>
#include <string>
#include "./tshirtsn.h"

int main() {
    assert(shouldersize_to_tshirtsize(38) == 'M');
    assert(shouldersize_to_tshirtsize(40) == 'M');
    assert(shouldersize_to_tshirtsize(43) == 'L');
    assert(shouldersize_to_tshirtsize(42) == 'M');
    printshirtsize();
    std::cout << "\n                All is well\n                    ";
    return 0;
}
