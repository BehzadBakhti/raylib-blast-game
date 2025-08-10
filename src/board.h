#include <raylib.h>
#include "block.h"
#include <vector>

#define Purple      Color{ 115, 43, 245, 255 }   
#define Orange      Color{ 255, 140, 10, 255 }         
#define Blue        Color{ 50, 150, 255, 255 }         
#define Green       Color{ 50, 255, 133, 255 }         


class Board 
{

public:
    void Init();
    void Draw();
    void ScanForColorMatch(int x, int y, Color color);

private:
    std::vector<Block> blocks;
    const std::vector<Color> colors {Purple, Orange, Blue, Green};
    const int gridWidth = 6;
    const int gridHeight = 10;
    const float blockDimention = 60;
    const float blockOffset= 5;
};