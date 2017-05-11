#ifndef BUTTON_H
#define BUTTON_H
#include <allegro.h>
#include <allegro_image.h>



class Button
{
    public:
        Button(int px, int py, ALLEGRO_BITMAP *pimage1, ALLEGRO_BITMAP *pimage2);
        virtual ~Button();
        bool ButtonPressed();
        void ChangeState();
        void Draw();
        void CollidePress(int px, int py);

    protected:


    private:
        int x;
        int y;
        int width;
        int height;
        ALLEGRO_BITMAP *image1;
        ALLEGRO_BITMAP *image2;
        bool pressed;
};

#endif // BUTTON_H
