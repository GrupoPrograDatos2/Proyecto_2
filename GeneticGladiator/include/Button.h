#ifndef BUTTON_H
#define BUTTON_H
#include <allegro.h>
#include <allegro_image.h>



class Button
{
    public:
        /**
        * @brief Constructor de la clase Button
        */
        Button(int px, int py, ALLEGRO_BITMAP *pimage1, ALLEGRO_BITMAP *pimage2);

        /**
        * @brief Destructor de la clase Button
        */
        virtual ~Button();

        /**
        * @brief cambia el flag pressed
        */
        bool ButtonPressed();

        /**
        * @brief Cambia el estado del boton
        */
        void ChangeState();

        /**
        * @brief Se encarga de dibujar el boton en la GUI
        */
        void Draw();

        /**
        * @brief
        * @param px posicion del mouse en x
        * @param px posicion del mouse en y
        */
        void CollidePress(int px, int py);

        /**
        * @brief cambia el flag drawn
        */
        void setDrawn();

    protected:


    private:
        int x;
        int y;
        int width;
        int height;
        ALLEGRO_BITMAP *image1;
        ALLEGRO_BITMAP *image2;
        bool pressed;
        bool drawn = false;
};

#endif // BUTTON_H
