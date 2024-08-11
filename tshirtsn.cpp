#include <assert.h>
#include <iostream>
#include<string>
#include <iomanip>
#include "./tshirtsn.h"
using std::string;

char shouldersize_to_tshirtsize(int shouldersize) {
    char TshirtsizeName = '\0';
    if (shouldersize < 38) {
        TshirtsizeName = 'S';
    } else if (shouldersize >=38 && shouldersize <=42) {
        TshirtsizeName = 'M';
    } else if (shouldersize >42) {
        TshirtsizeName = 'L';
    }
    return TshirtsizeName;
}
void printshirtsize() {
  const int sizeRangeWidth = 20;
  const int tshirtSizeWidth = 15;
  std::cout << std::setw(sizeRangeWidth) << std::left << "Shoulder Size Range"
              << " | " << std::setw(tshirtSizeWidth) << std::left << "T-Shirt Size" << std::endl;
    std::cout << std::string(sizeRangeWidth + tshirtSizeWidth + 5, '-') << std::endl;
    std::cout << std::setw(sizeRangeWidth) << std::left << "Less than 38"
              << " | " << std::setw(tshirtSizeWidth) << std::left << "S" << std::endl;

    std::cout << std::setw(sizeRangeWidth) << std::left << "38 to 42"
              << " | " << std::setw(tshirtSizeWidth) << std::left << "M" << std::endl;

    std::cout << std::setw(sizeRangeWidth) << std::left << "Greater than 42"
              << " | " << std::setw(tshirtSizeWidth) << std::left << "L" << std::endl;
}
