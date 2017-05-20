#ifndef FIGHTER_H
#define FIGHTER_H

#include <allegro.h>
#include <allegro_image.h>
#include <allegro_audio.h>
#include <allegro_acodec.h>

#include <string>

class Fighter
{
    public:
        /**
        * @brief Constructor de la clase
        */
        Fighter(ALLEGRO_BITMAP *pimage, int px, int py);

        /**
        * @brief Destructor de la clase
        */
        virtual ~Fighter();

        /**
        * @brief Obtiene la posicion en X
        * @return posicion en X
        */
        int GetX();

        /**
        * @brief Establece una posicion en X
        * @param px posicion nueva
        */
        void SetX(int px);

        /**
        * @brief Obtiene la posicion en Y
        * @return posicion en Y
        */
        int GetY();

        /**
        * @brief Establece una posicion en Y
        * @param py posicion nueva
        */
        void SetY(int py);

        /**
        * @brief Cambia el estado de la animacion en el GUI
        * @param stt nuevo estado
        */
        void setState(int stt);

        /**
        * @brief Se encarga de dibujar la imagen en la GUI
        */
        void Draw();

    protected:

    private:
        int x;
        int y;
        int handAtk;
        int legAtk;
        int meleeAtk;
        int handResist;
        int legResist;
        int meleeResist;
        int maxResist;

        ALLEGRO_BITMAP *image;

        int frameWidth;
        int frameHeight;
        int maxFrame;
        int curFrame;
        int frameDelay;
        int frameCount;

        int state = 0;
        bool ready = false;



};

#endif // FIGHTER_H
