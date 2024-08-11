#include <vector>
#include <string>
#include<iomanip>
#include <iostream>
#include "./color_mapn.h"


std::vector<std::string> createColorMap() {
    std::vector<std::string> colorMap;
    std::string majorColors[] = {"White", "Red", "Black", "Yellow", "Violet"};
    std::string minorColors[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorsSize = sizeof(majorColors) / sizeof(majorColors[0]);
    int minorColorsSize = sizeof(minorColors) / sizeof(minorColors[0]);

    for (int i = 0; i < majorColorsSize; i++) {
        for (int j = 0; j < minorColorsSize; j++) {
            std::string colorPair = std::to_string(i * 5 + j + 1) + " " +
                                    majorColors[i] + " " + minorColors[j];
            colorMap.push_back(colorPair);
        }
    }
    return colorMap;
}

void printColormap() {
    std::vector<std::string> colorMap;
    std::string majorColors[] = {"White", "Red", "Black", "Yellow", "Violet"};
    std::string minorColors[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorsSize = sizeof(majorColors) / sizeof(majorColors[0]);
    int minorColorsSize = sizeof(minorColors) / sizeof(minorColors[0]);

    // Column widths
    const int numberWidth = 4;
    const int majorColorWidth = 20;
    const int minorColorWidth = 15;

    // Header
    std::cout << std::setw(numberWidth) << "No."
              << " | " << std::setw(majorColorWidth) << std::left << "Major Color"
              << " | " << std::setw(minorColorWidth) << std::left << "Minor Color" << std::endl;
    std::cout << std::string(numberWidth + majorColorWidth + minorColorWidth + 5, '-') << std::endl;

    // Generate color map
    for (int i = 0; i < majorColorsSize; i++) {
        for (int j = 0; j < minorColorsSize; j++) {
            std::cout << std::setw(numberWidth)
            << i * minorColorsSize + j + 1
                      << " | " << std::setw(majorColorWidth)
                      << std::left << majorColors[i]
                      << " | " << std::setw(minorColorWidth)
                      << std::left << minorColors[j]
                      << std::endl;
        }
    }
}
