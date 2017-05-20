/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GenGladiator;

/**
 *
 * @author usuario
 */
public class Main {
	public static void main(String[] args) {
    	Gladiador c= new Gladiador("Pepe",4,3,5,1,2,4);
        System.out.print(c.Nombre+"\n");
        System.out.print("Fuerza Mano "+c.Magnitud_Golpe_Mano+"\n");
        System.out.print("Resis Mano "+c.Resist_Mano+"\n");
        System.out.print("Fuerza Total "+c.Fuerza_Total+"\n");
        //c.BajarResistencia(6, 1);
        System.out.print("Resis Mano "+c.Resist_Mano+"\n");
        System.out.print("Resis Total "+c.Resist_Total+"\n");
        for(int i=0; i<6;i++){
        	System.out.print(c.MGenetico[i]+"\n");
        }
        
        Lista list=new Lista();
        list.Insert(c);
        list.Insert(c);
        System.out.print("tamaño lista" + list.getTamano()+"\n");
        
        System.out.println((int) (Math.random() * 4) + 1);
        
        
        Algoritmo_Genetico AG=new Algoritmo_Genetico();
        System.out.print("Fuerza del mejor"+AG.Mejor_Fitness().Fuerza_Total+"\n");
        System.out.print("TAMAÑO_INIC"+AG.poblacion.getTamano()+"\n");
        AG.reproduccion();
        
        System.out.print("TAMAÑO_POBLACION_2:  "+AG.poblacion.getTamano()+"\n");
        AG.reproduccion();
        System.out.print("TAMAÑO_POBLACION_3:  "+AG.poblacion.getTamano()+"\n");
        
        //for(int i=0; i<AG.poblacion.getTamano();i++){
        //	System.out.print(AG.poblacion.getData(i).Nombre+"\n");
        //}
    }
    
}
