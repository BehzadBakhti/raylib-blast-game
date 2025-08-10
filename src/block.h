#pragma once
#include <raylib.h>
#include <functional>

class Block
{
public:
    Block(int x, int y, Color color, std::function<void(int, int, Color)> onClick = nullptr)
        : m_x(x), m_y(y), color(color), onClick(onClick) {};
    void Update(int x, int y);
    void Draw(float blockDimention, float offset);

private:
 
    int m_x;
    int m_y;
    Color color;
    std::function<void(int x, int y, Color color)> onClick;
    Rectangle m_rect;

};
