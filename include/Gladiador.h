#ifndef GLADIADOR_H
#define GLADIADOR_H
#include <iostream>

using namespace std;

class Gladiador
{
    public:
        Gladiador();
        virtual ~Gladiador();
        string GetNombre() { return Nombre; }
        void SetNombre(string val) { Nombre = val; }
        int GetMagnitud_Golpe_Mano() { return Magnitud_Golpe_Mano; }
        void SetMagnitud_Golpe_Mano(int val) { Magnitud_Golpe_Mano = val; }
        int GetMagnitud_Golpe_Pies() { return Magnitud_Golpe_Pies; }
        void SetMagnitud_Golpe_Pies(int val) { Magnitud_Golpe_Pies = val; }
        int GetMagn_Golp_CuerpoACuerpo() { return Magn_Golp_CuerpoACuerpo; }
        void SetMagn_Golp_CuerpoACuerpo(int val) { Magn_Golp_CuerpoACuerpo = val; }
        int GetResist_Mano() { return Resist_Mano; }
        void SetResist_Mano(int val) { Resist_Mano = val; }
        int GetResist_Pies() { return Resist_Pies; }
        void SetResist_Pies(int val) { Resist_Pies = val; }
        int GetResist_CuerpoACuerpo() { return Resist_CuerpoACuerpo; }
        void SetResist_CuerpoACuerpo(int val) { Resist_CuerpoACuerpo = val; }
        int GetResist_Total() { return Resist_Total; }
        void SetResist_Total(int val) { Resist_Total = val; }
    protected:
    private:
        string Nombre;
        int Magnitud_Golpe_Mano;
        int Magnitud_Golpe_Pies;
        int Magn_Golp_CuerpoACuerpo;
        int Resist_Mano;
        int Resist_Pies;
        int Resist_CuerpoACuerpo;
        int Resist_Total;
};

#endif // GLADIADOR_H
