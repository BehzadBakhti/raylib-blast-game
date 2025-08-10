#include "block.h"
#include <raylib.h>

#include <iostream>

void Block::Update(int newX, int newY) 
{
    m_x = newX;
    m_y = newY;
    Vector2 mousePos = GetMousePosition();
    bool isHovering = CheckCollisionPointRec(mousePos, Rectangle{(m_y+1)*5+m_y*60, (m_x+1)*5+m_x*60, 60, 60});
    bool isClicked = isHovering && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
    if(isClicked && onClick) {
        onClick(m_x, m_y, color);
    }
}

void Block::Draw(float blockDimention, float offset) 
{
    m_rect = Rectangle{(m_y+1)*offset+m_y*blockDimention, (m_x+1)*offset+m_x*blockDimention,  blockDimention, blockDimention};
    DrawRectangleRounded(m_rect, 0.5, 0, color);
}