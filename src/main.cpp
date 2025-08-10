#include <raylib.h>
#include "block.h"
#include "board.h"
#include <vector>
#include <iostream>


int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 450;
    constexpr int screenHeight = 650;

    Board board;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    board.Init();
    
    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(BLACK);
        board.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}

