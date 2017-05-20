package GenGladiator;

import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.Document;
import org.w3c.dom.NodeList;
import org.w3c.dom.Node;
import org.w3c.dom.Element;
import java.io.File;

public class ManejaXML {
	 public static void main(String argv[]) {

		    try {

			File fXmlFile = new File("C:\\Users\\Steven Vega Zuñiga\\workspace\\Evolucionador\\src\\GenGladiator\\Poblacion.xml");
			DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
			DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
			Document doc = dBuilder.parse(fXmlFile);


			System.out.println("Informacion Gladiador :" + doc.getDocumentElement().getNodeName());

			NodeList nList = doc.getElementsByTagName("staff");

			System.out.println("----------------------------");

			for (int temp = 0; temp < nList.getLength(); temp++) {

				Node nNode = nList.item(temp);

				System.out.println("\nCurrent Element :" + nNode.getNodeName());

				if (nNode.getNodeType() == Node.ELEMENT_NODE) {

					Element eElement = (Element) nNode;

					System.out.println("GladiadorSeleccionado : " + eElement.getAttribute("nombre"));
					System.out.println("Fitness : " + eElement.getElementsByTagName("fitness").item(0).getTextContent());
					System.out.println("Inversiones : " + eElement.getElementsByTagName("inversio").item(0).getTextContent());
					System.out.println("Mutaciones : " + eElement.getElementsByTagName("mutaciones").item(0).getTextContent());
					System.out.println("Resultado Final : " + eElement.getElementsByTagName("resultadofinal").item(0).getTextContent());

				}
			}
		    } catch (Exception e) {
			e.printStackTrace();
		    }
		  }


}
