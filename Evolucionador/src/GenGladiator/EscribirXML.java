package com.ce2103.CrearXML;

import java.io.FileWriter;
import java.io.IOException;
import org.jdom.Document;
import org.jdom.Element;
import org.jdom.JDOMException;
import org.jdom.input.SAXBuilder;
import org.jdom.output.Format;
import org.jdom.output.XMLOutputter;

public class EscribirXML {
	
	public static void main(String[] args) {

		  try {

			Element gladiador = new Element("gladiador");
			Document doc = new Document(gladiador);
			doc.setRootElement(gladiador);

			Element Gladiador1 = new Element("Gladiador1");
			Gladiador1.setAttribute(new Attribute("id", "1"));
			Gladiador1.addContent(new Element("fitness gladiador1").setText("yong"));
			Gladiador1.addContent(new Element("inversion").setText(" inversion"));
			Gladiador1.addContent(new Element("mutacion").setText("mutacion"));
			Gladiador1.addContent(new Element("resultado final").setText("resultado final"));

			doc.getRootElement().addContent(Gladiador1);

			Element Gladiador2 = new Element("Gladiador2");
			Gladiador2.setAttribute(new Attribute("id", "2"));
			Gladiador2.addContent(new Element("fitness gladiador2").setText("low"));
			Gladiador2.addContent(new Element("inversion2").setText("inversion2"));
			Gladiador2.addContent(new Element("mutacion2").setText("mutacion2"));
			Gladiador2.addContent(new Element("resultado final").setText("resultado final"));

			doc.getRootElement().addContent(Gladiador2);

			// new XMLOutputter().output(doc, System.out);
			XMLOutputter xmlOutput = new XMLOutputter();

			// display nice nice
			xmlOutput.setFormat(Format.getPrettyFormat());
			xmlOutput.output(doc, new FileWriter("ruta"));

			System.out.println("Archivo Guardado!");
		  } catch (IOException io) {
			System.out.println(io.getMessage());
		  }
		}

}
