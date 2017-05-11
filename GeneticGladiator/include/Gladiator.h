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
        Gladiator(string id, ALLEGRO_BITMAP *pimage);
        virtual ~Gladiator();


        int GetX();
        void SetX(int px);

        int GetY();
        void SetY(int py);


        int GethandResist();
        void SethandResist(int pattack);

        int GetlegResist();
        void SetlegResist(int pattack);

        int GetmeleeResist();
        void SetmeleeResist(int pattack);

        int GetmaxResist();
        void SetmaxResist(int pattack);

        int GethandAtk();
        void SethandAtk(int pattack);

        int GetlegAtk();
        void SetlegAtk(int pattack);

        int GetmeleeAtk();
        void SetmeleeAtk(int pattack);

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
