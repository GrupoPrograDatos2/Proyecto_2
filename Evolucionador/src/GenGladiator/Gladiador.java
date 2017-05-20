package GenGladiator;


public class Gladiador {
	String Nombre;
    int Magnitud_Golpe_Mano;
    int Magnitud_Golpe_Pies;
    int Magn_Golp_CuerpoACuerpo;
    int Fuerza_Total;
    int Resist_Mano;
    int Resist_Pies;
    int Resist_CuerpoACuerpo;
    int Resist_Total;
    int Fitness;
    int[] MGenetico;//Contiene las caracteristicas del gladiador
    int indice_de_mutacion;//indice de uno al tres para saber si es mutado o no
    int indice_inversion;//indice del uno al 5 para saber si se le aplica inversion
    
    
    public Gladiador(String nombre, int GMano, int GPies, int GCuerpo,int RMano, int RPies, int RCuerpo){
    	indice_de_mutacion=(int) (Math.random() * 5) + 1;
    	indice_inversion=(int) (Math.random() * 3) + 1;
        Nombre=nombre;
        Magnitud_Golpe_Mano=GMano;
        Magnitud_Golpe_Pies=GPies;
        Magn_Golp_CuerpoACuerpo=GCuerpo;
        CalcularFuerza();
        Resist_Mano=RMano;
        Resist_Pies=RPies;
        Resist_CuerpoACuerpo=RCuerpo;
        CalcularResitencia();
        Fitness= Resist_Total+Fuerza_Total;
        MGenetico= new int[6];
        //Se agrega el material genético al array
        MGenetico[0]=GMano;
        MGenetico[1]=GPies;
        MGenetico[2]=GCuerpo;
        MGenetico[3]=RMano;
        MGenetico[4]=RPies;
        MGenetico[5]=RCuerpo;
        
    }
    
    public void CalcularResitencia(){
    	Resist_Total= Resist_Mano+Resist_Pies+Resist_CuerpoACuerpo;
    }
    
    public void CalcularFuerza(){
    	Fuerza_Total= Magnitud_Golpe_Mano+Magnitud_Golpe_Pies+Magn_Golp_CuerpoACuerpo;
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

