package GenGladiator;

import GenGladiator.Algoritmo_Genetico;

import java.io.FileWriter;
import java.io.IOException;


import java.io.FileWriter;
import java.io.IOException;
import org.jdom.Attribute;
import org.jdom.Document;
import org.jdom.Element;
import org.jdom.output.Format;
import org.jdom.output.XMLOutputter;
public class EscribirXML {
	
	public static void main(String[] args) {
		
		Algoritmo_Genetico AG= new Algoritmo_Genetico();
		AG.reproduccion();
		

		  try {

			Element evolucionador = new Element("evolucionador");
			Document doc = new Document(evolucionador);
			doc.setRootElement(evolucionador);
			
			
			for(int i=0; i<AG.poblacion.getTamano();i++){
			//Elementos a añadir al XML
			String nombre= AG.poblacion.getData(i).Nombre;
			Element Gladiador2 = new Element(nombre);
			Gladiador2.setAttribute(new Attribute("id", ""+i));//
			String fitness=Integer.toString(AG.poblacion.getData(i).Fitness);
			Gladiador2.addContent(new Element("fitness").setText(fitness));
			
			doc.getRootElement().addContent(Gladiador2);
			}
			
			Element Poblacion = new Element("Estadisticas_Poblacion");
			String inversion=Integer.toString(AG.inversiones);
			Poblacion.addContent(new Element("inversiones").setText(inversion));
			String mutacion=Integer.toString(AG.mutaciones);
			Poblacion.addContent(new Element("mutaciones").setText(mutacion));
			Poblacion.addContent(new Element("resultadofinal").setText("resultadofinal"));
			
			doc.getRootElement().addContent(Poblacion);


			// new XMLOutputter().output(doc, System.out);
			XMLOutputter xmlOutput = new XMLOutputter();

			// ruta del xml
			xmlOutput.setFormat(Format.getPrettyFormat());
			xmlOutput.output(doc, new FileWriter("C:\\Users\\Steven Vega Zuñiga\\workspace\\Evolucionador\\src\\GenGladiator\\Poblacion.xml"));

			System.out.println("Archivo Guardado!");
		  } catch (IOException io) {
			System.out.println(io.getMessage());
		  }
		}

}
