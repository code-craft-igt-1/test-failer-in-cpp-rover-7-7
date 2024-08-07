#include <assert.h>
#include <iostream>
#include <vector>
#include <string>
#include "../tshirts.h"


int main() {
    assert(size_measure(38) == 'S');
    assert(size_measure(40) == 'M');
    assert(size_measure(43) == 'L');
    assert(size_measure(38) == 'M');
    std::cout << "All is well\n";
    return 0;
}
