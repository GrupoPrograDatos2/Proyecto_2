#ifndef GLADIATOR_H
#define GLADIATOR_H

#include <allegro.h>
#include <allegro_image.h>
#include <allegro_audio.h>
#include <allegro_acodec.h>

#include <string>

using namespace std;



class Gladiator
{
    public:

        /**
        *   @brief Constructor de la clase
        *   @param id Id del gladiador
        *   @param pimage imagen del gladiador en la zona de intimidacion
        */
        Gladiator(string id, ALLEGRO_BITMAP *pimage);

        /**
        *   @brief Destructor de la clase
        */
        virtual ~Gladiator();

        /**
        * @brief Obtiene la posicion en X del gladiador
        * @return valor posicion en X
        */
        int GetX();

        /**
        * @brief establece un valor para la posicion X
        * @param px nueva posicion X
        */
        void SetX(int px);

        /**
        * @brief Obtiene la posicion en Y del gladiador
        * @return valor posicion en Y
        */
        int GetY();

        /**
        * @brief establece un valor para la posicion Y
        * @param px nueva posicion Y
        */
        void SetY(int py);

        /**
        * @brief Obtiene la resistencia a golpes del gladiador
        * @return valor de la resistencia a golpes
        */
        int GethandResist();

        /**
        * @brief establece un valor para la resistencia hacia los golpes
        * @param presist valor a establecer
        */
        void SethandResist(int presist);

        /**
        * @brief Obtiene la resistencia a patadas del gladiador
        * @return valor de la resistencia a patadas
        */
        int GetlegResist();

        /**
        * @brief establece un valor para la resistencia hacia patadas
        * @param presist valor a establecer
        */
        void SetlegResist(int presist);

        /**
        * @brief Obtiene la resistencia a ataques cuerpo a cuerpo del gladiador
        * @return valor de la resistencia a ataques cuerpo a cuerpo
        */
        int GetmeleeResist();

        /**
        * @brief establece un valor para la resistencia hacia ataques cuerpo a cuerpo
        * @param presist valor a establecer
        */
        void SetmeleeResist(int presist);

        /**
        * @brief Obtiene la resistencia maxima del gladiador
        * @return valor de la resistencia maxima
        */
        int GetmaxResist();

        /**
        * @brief establece un valor para la resistencia maxima
        * @param presist valor a establecer
        */
        void SetmaxResist(int presist);

        /**
        * @brief Obtiene el ataque de golpes del gladiador
        * @return valor del ataque de golpes
        */
        int GethandAtk();

        /**
        * @brief establece un valor para los golpes
        * @param pattack valor a establecer
        */
        void SethandAtk(int pattack);

        /**
        * @brief Obtiene el ataque de patadas del gladiador
        * @return valor del ataque de patadas
        */
        int GetlegAtk();

        /**
        * @brief establece un valor para las patadas
        * @param pattack valor a establecer
        */
        void SetlegAtk(int pattack);

        /**
        * @brief Obtiene el ataque de ataques cuerpo a cuerpo del gladiador
        * @return valor del ataque de ataques cuerpo a cuerpo
        */
        int GetmeleeAtk();

        /**
        * @brief establece un valor para los ataques cuerpo a cuerpo
        * @param pattack valor a establecer
        */
        void SetmeleeAtk(int pattack);

        /**
        * @brief Se encarga de dibujar la imagen en la GUI
        */
        void Draw();



    protected:

    private:
        int x;
        int y;
        string ID;
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




};

#endif // GLADIATOR_H
