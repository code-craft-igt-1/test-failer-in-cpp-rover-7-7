#include <vector>
#include <string>
#include "color_mapn.h"

std::vector<std::string> printColorMap() {
    std::vector<std::string> colorMap;
    std::string majorColors[] = {"White", "Red", "Black", "Yellow", "Violet"};
    std::string minorColors[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorsSize = sizeof(majorColors) / sizeof(majorColors[0]);
    int minorColorsSize = sizeof(minorColors) / sizeof(minorColors[0]);

    for (int i = 0; i < majorColorsSize; i++) {
        for (int j = 0; j < minorColorsSize; j++) {
            std::string colorPair = std::to_string(i * 5 + j + 1) + " " +
                                    majorColors[i] + " " + minorColors[i];
            colorMap.push_back(colorPair);
        }
    }
    return colorMap;
}