#include "Gladiator.h"

Gladiator::Gladiator(string id, ALLEGRO_BITMAP *pimage)
{
    x = 300;
    y = 300;
    frameWidth = 30;
    frameHeight = 50;

    image = pimage;

    maxFrame = 9;
    curFrame = 0;
    frameCount = 0;
    frameDelay = 5;
}

Gladiator::~Gladiator()
{

}


void Gladiator::Draw()
{

    int framex = curFrame *frameWidth;

    al_draw_bitmap_region(image, framex, 0, frameWidth, frameHeight, x - frameWidth/2, y - frameHeight/2, 0);

    if(++frameCount>=frameDelay)
    {
        curFrame += 1;

        if(curFrame >= maxFrame)
        {
            curFrame = 0;

        }
        frameCount = 0;
    }

}
