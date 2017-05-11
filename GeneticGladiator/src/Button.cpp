#include "Button.h"
#include <iostream>

Button::Button(int px, int py, ALLEGRO_BITMAP *pimage1, ALLEGRO_BITMAP *pimage2)
{
   x = px;
   y= py;
   width = al_get_bitmap_width(pimage1);
   height = al_get_bitmap_height(pimage1);

   image1 = pimage1;
   image2 = pimage2;
   pressed = false;
}

Button::~Button()
{

}

void Button::ChangeState()
{
    if (pressed==true)
        pressed = false;
    else
        pressed = true;
}


void Button::Draw()
{
    if (pressed)
        al_draw_bitmap(image2, x, y, 0);
    else
        al_draw_bitmap(image1, x, y, 0);
}

void Button::CollidePress(int px, int py)
{
    if (px>=x && px<=width+x && py>=y && py<=height+y)
    {
        ChangeState();

    }

}
