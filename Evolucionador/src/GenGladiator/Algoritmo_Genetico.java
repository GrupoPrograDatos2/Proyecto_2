package GenGladiator;

import java.io.File;
import java.io.IOException;
import java.util.Arrays;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;

import org.w3c.dom.Document;
import org.w3c.dom.Node;
import org.xml.sax.SAXException;

public class Algoritmo_Genetico {
    
    Gladiador[] poblacion;//Array con los gladiadores de la poblacion
    int size;
    
    public Gladiador Mejor_Fitness(){//Determina cual es el gladiador con mejor fitness
        int temp=0;//Esta temporal lleva el numero de índice en el que se encuentra el gladiador con mejor fitness
        for(int i=0; i<size; i++){//Acá se recorre toda la población
            if(poblacion[i].Resist_Total+poblacion[i].Fuerza_Total>poblacion[temp].Resist_Total+poblacion[temp].Fuerza_Total){//Acá se compara el fitness
                temp=i;//si es mayor, entonces es el nuevo gladiador con mejor fitness
            }
        }
        return poblacion[temp];//Se retorna el gladiador con mejor fitness
    }

}
