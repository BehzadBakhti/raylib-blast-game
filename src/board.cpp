#include <raylib.h>
#include "block.h"
#include <vector>
#include "board.h"
#include <iostream>

void Board::Init()
{
    for (int i = 0; i < gridHeight; i++)
    {
        for (int j = 0; j < gridWidth; j++)
        {
            blocks.push_back(Block{i,j, colors[rand() % 4], [this](int x, int y, Color color) { ScanForColorMatch(x, y, color);}});
        }
    }
}

void Board::Draw()
{
    for (int i = 0; i < blocks.size(); i++)
    {
        blocks[i].Draw(blockDimention, blockOffset);
    }
}



void Board::ScanForColorMatch(int x, int y, Color color)
{
  std::cout << "Clicked: " << x << y << "\n";
}
