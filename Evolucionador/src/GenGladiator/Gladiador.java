package GenGladiator;

public class Gladiador {
	String Nombre;
    int Magnitud_Golpe_Mano;
    int Magnitud_Golpe_Pies;
    int Magn_Golp_CuerpoACuerpo;
    int Resist_Mano;
    int Resist_Pies;
    int Resist_CuerpoACuerpo;
    int Resist_Total;
    int Fuerza_Total;
    
    
    public Gladiador(String nombre, int GMano, int GPies, int GCuerpo,int RMano, int RPies, int RCuerpo){
        Nombre=nombre;
        Magnitud_Golpe_Mano=GMano;
        Magnitud_Golpe_Pies=GPies;
        Magn_Golp_CuerpoACuerpo=GCuerpo;
        Resist_Mano=RMano;
        Resist_Pies=RPies;
        Resist_CuerpoACuerpo=RCuerpo;
        Resist_Total=RMano+RPies+RCuerpo;
        Fuerza_Total=GMano+GPies+GCuerpo;
    }
    
    public void BajarResistencia(int valor, int golpe){
    if(Resist_Total<valor)//Si el valor es mayor a la resistencia total del gladiador
    {//Entonces todas las resistencias equivalen a cero (esto porque no se sabe cual será la última en rebajarse)
        Resist_Total=0;//Y claramente es necesario poner la resistencia total en cero
        Resist_Mano=0;
        Resist_Pies=0;
        Resist_CuerpoACuerpo=0;
    }
    if(golpe==1)//El número 1 es el golpe de mano
    {
            if(Resist_Mano<valor && Resist_Mano!=0){//Si la Resistencia es menor que el valor del ataque y además es diferente de cero,
                Resist_Mano=0;//entonces la resistencia será cero
                Resist_Total=Resist_Total-valor;// y se le resta el valor a la resistencia total
            }
            if(Resist_Mano>=valor){//Si el valor de la resistencia es mayor o igual al valor del golpe
                Resist_Mano=Resist_Mano-valor;//entonces se le resta el valor a la resistencia de la mano
                Resist_Total=Resist_Total-valor;//y a la resistencia total

            }

    }

    if(golpe==2)//El número 2 es el golpe de pies
    {
            if(Resist_Pies<valor && Resist_Pies!=0){//Si la Resistencia es menor que el valor del ataque y además es diferente de cero,
                Resist_Pies=0;//entonces la resistencia será cero
                Resist_Total=Resist_Total-valor;// y se le resta el valor a la resistencia total
            }
            if(Resist_Pies>=valor){//Si el valor de la resistencia es mayor o igual al valor del golpe
                Resist_Pies=Resist_Pies-valor;//entonces se le resta el valor a la resistencia de la pies
                Resist_Total=Resist_Total-valor;//y a la resistencia total

            }

    }

    if(golpe==3)//El número 3 es el golpe Cuerpo a Cuerpo
    {
            if(Resist_CuerpoACuerpo<valor && Resist_CuerpoACuerpo!=0){//Si la Resistencia es menor que el valor del ataque y además es diferente de cero,
                Resist_CuerpoACuerpo=0;//entonces la resistencia será cero
                Resist_Total=Resist_Total-valor;// y se le resta el valor a la resistencia total
            }
            if(Resist_CuerpoACuerpo>=valor){//Si el valor de la resistencia es mayor o igual al valor del golpe
                Resist_CuerpoACuerpo=Resist_CuerpoACuerpo-valor;//entonces se le resta el valor a la resistencia Cuerpo a cuerpo
                Resist_Total=Resist_Total-valor;//y a la resistencia total

            }

    }

    }
}
