#include <vector>
#include <string>

std::vector<std::string> printColorMap() {
    std::vector<std::string> colorMap;
    std::string majorColors[] = {"White", "Red", "Black", "Yellow", "Violet"};
    std::string minorColors[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorcolorsize = sizeof(majorColors) / sizeof(majorColors[0]);
    int minorcolorsize = sizeof(minorColors) / sizeof(minorColors[0]);
    int i = 0, j = 0;
    for(i = 0; i < majorcolorsize; i++) {
        for(j = 0; j < minorcolorsize; j++) {
            std::string colorPair = std::to_string(i * 5 + j +1) + " " + majorColors[i] + " " + minorColors[i];
            colorMap.push_back(colorPair);
        }
    }
    return colorMap;
}