package GenGladiator;

public class Algoritmo_Genetico {
	    
	    Lista poblacion;//Lista con los gladiadores de la población
	    int size;//Tamaño de la lista
	    int GEN;
	    int inversiones;
	    int mutaciones;
	    
	    public Algoritmo_Genetico(){
	    	GEN=0;
	    	inversiones=0;
	    	mutaciones=0;
	    	poblacion=new Lista();
	    	size=6;//tamaño de la población inicial
	    	for(int i=0; i<size;i++){
	    		//Se generan randoms para la población
	    		int gMano = (int) (Math.random() * 100) + 1;//El 100 representa hasta donde va y el uno donde comienza
	    		int gPies = (int) (Math.random() * 100) + 1;
	    		int gCuerpo = (int) (Math.random() * 100) + 1;
	    		int rMano = (int) (Math.random() * 100) + 1;
	    		int rPies = (int) (Math.random() * 100) + 1;
	    		int rCuerpo = (int) (Math.random() * 100) + 1;
	    		String nombre="Goliath"+i;
	    		Gladiador temp=new Gladiador(nombre,gMano,gPies,gCuerpo,rMano,rPies,rCuerpo);
	    		poblacion.Insert(temp);//Se agrega el gladiador a la lista con la población

	    	}
	    }
	    
	    public Gladiador Mejor_Fitness(){//Determina cual es el gladiador con mejor fitness
	        int temp=0;//Esta temporal lleva el numero de índice en el que se encuentra el gladiador con mejor fitness
	        for(int i=0; i<size; i++){//Acá se recorre toda la población
	            if(poblacion.getData(i).Resist_Total+poblacion.getData(i).Fuerza_Total>poblacion.getData(temp).Resist_Total+poblacion.getData(temp).Fuerza_Total){//Acá se compara el fitness
	                temp=i;//si es mayor, entonces es el nuevo gladiador con mejor fitness
	            }
	        }
	        return poblacion.getData(temp);//Se retorna el gladiador con mejor fitness
	    }
	    
	    public void Cruce(Gladiador glad1,Gladiador glad2){
	    	int GolpeMano=glad1.MGenetico[0];
	    	int GolpePies=glad1.MGenetico[1];
	    	int GolpeCuerpo=glad1.MGenetico[2];
	    	int ResistMano=glad2.MGenetico[3];
	    	int ResistPies=glad2.MGenetico[4];
	    	int ResistCuerpo=glad2.MGenetico[5];
	    	Gladiador hijo=new Gladiador("Hijo"+glad1.Nombre+glad2.Nombre,GolpeMano,GolpePies,GolpeCuerpo,ResistMano,ResistPies,ResistCuerpo);
	    	//Hay que mutar
	    	Mutar(hijo);
	    	System.out.print("CRUCE"+"\n");
	    	poblacion.Insert(hijo);
	    }
	    
	    public void Mutar(Gladiador glad){
	    	if(glad.indice_de_mutacion==2)//estipula si el gladiador será mutado o no
	    	{
	    		mutaciones++;
		    	int temp=(int) (Math.random() * 100) + 20;
		    	int indice=(int) (Math.random() * 5);//número de 0 al 5 para mutar el gen que salga a partir del random
		    	
		    	if(indice==0){//Golpe de mano
		    		glad.MGenetico[0]=temp;
		    		glad.Magnitud_Golpe_Mano=temp;
		    	}
		    	
		    	if(indice==1){//Golpe de Pies
		    		glad.MGenetico[1]=temp;
		    		glad.Magnitud_Golpe_Pies=temp;
		    	}
		    	
		    	if(indice==2){//Golpe de cuerpo
		    		glad.MGenetico[2]=temp;
		    		glad.Magn_Golp_CuerpoACuerpo=temp;
		    	}
		    	
		    	if(indice==3){//Resistencia de Mano
		    		glad.MGenetico[3]=temp;
		    		glad.Resist_Mano=temp;
		    	}
		    	
		    	if(indice==4){//Resistencia de Pies
		    		glad.MGenetico[4]=temp;
		    		glad.Resist_Pies=temp;
		    	}
		    	
		    	if(indice==5){//Resistencia de cuerpo
		    		glad.MGenetico[5]=temp;
		    		glad.Resist_CuerpoACuerpo=temp;
		    	}
		    	glad.CalcularResitencia();
		    	glad.CalcularFuerza();
		    	}
	    }
	    
	    public void inversion(Gladiador glad){
	    	if(glad.indice_inversion==3)
	    	{
	    		inversiones++;
	    		System.out.print("INVERSION"+"\n");
	    		poblacion.Insert(glad);//Si el índice de inversion del gladiador es correcto, se agrega de nuevo a la población
	    	}
	    }
	    
	    public void reproduccion(){
	    	System.out.print("GEN: "+GEN+"\n");
	    	for(int i=0; i<poblacion.getTamano();i++){
	        	System.out.print(poblacion.getData(i).Nombre+"\n");
	        }
	    	int temp=poblacion.getTamano();
	    	System.out.print("TAMAÑOPOBL: "+poblacion.getTamano()+"\n");
	    	for(int i=0; i<temp;i=i+2){
	    		if(i!=temp-1){
	    			System.out.println(i);
	    			inversion(poblacion.getData(i));
	    			inversion(poblacion.getData(i+1));
	    			Cruce(poblacion.getData(i),poblacion.getData(i+1));//se cruza la población de dos en dos
	    		}
	    	}
	    	GEN++;
	    }
	    
	    
	

}

