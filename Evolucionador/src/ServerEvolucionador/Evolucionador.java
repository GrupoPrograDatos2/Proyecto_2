package ServerEvolucionador;

import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.GET;

@Path ("/puta") //uri
public class Evolucionador {
	@GET
	@Produces (MediaType.TEXT_XML) //xml.json
	public String MuestraInfo(){
		String response="?xml version='1.0'?>" +
	                    "<infogladiador> Hola, Soy Goliath"+ "</infogladiador>";
		return response;
		//return " Hola, Soy Goliath";
	}
	
	@GET
	@Produces(MediaType.TEXT_HTML)	////metodo con output en formato HTML
	public String MuestraInfoHTML(){
		
		String response = "<h1>Hola soy Goliath HTML</h1>";
		return response;
	}
	@GET
	@Produces (MediaType.TEXT_XML)
	public String NumGeneracion (){
		String response= "?xml version='1.0'?>" +
                "<numgeneracion> El numero de generacion es:"+ "</numgeneracion>";
		return response;
	}
	@GET
	@Produces(MediaType.TEXT_HTML)	////metodo con output en formato HTML
	public String NumGenHTML(){
		
		String response = "<h1>Numero Generacion</h1>";
		return response;
	}
	@GET
	@Produces (MediaType.TEXT_XML)
	public String MutacionesOcurridas (){
		String response= "?xml version='1.0'?>" +
                "<mutacion> Han habido: mutaciones:"+ "</mutacion>";
		return response;
	}
	@GET
	@Produces(MediaType.TEXT_HTML)	////metodo con output en formato HTML
	public String MutacionHTML(){
		
		String response = "<h1>Han habido: mutaciones:</h1>";
		return response;
	}
	@GET
	@Produces (MediaType.TEXT_XML)
	public String Inversiones (){
		String response= "?xml version='1.0'?>" +
                "<inversiones> Han habido: inversiones:"+ "</inversiones>";
		return response;
	}
	@GET
	@Produces(MediaType.TEXT_HTML)	////metodo con output en formato HTML
	public String InversionHTML(){
		
		String response = "<h1>Han habido: inversiones:</h1>";
		return response;
	}
	@GET
	@Produces (MediaType.TEXT_XML)
	public String GladiadorElegido (){
		String response= "?xml version='1.0'?>" +
                "<gladiadorelegido> Han habido: inversiones:"+ "</gladiadorelegido>";
		return response;
	}
	@GET
	@Produces(MediaType.TEXT_HTML)	////metodo con output en formato HTML
	public String GladiadorElegidoHTML(){
		
		String response = "<h1>El gladiador elegido es: </h1>";
		return response;
	}
	@GET
	@Produces (MediaType.TEXT_XML)
	public String Resultado (){
		String response= "?xml version='1.0'?>" +
                "<resultado> El resultado final es:"+ "</resultado>";
		return response;
	}
	@GET
	@Produces(MediaType.TEXT_HTML)	////metodo con output en formato HTML
	public String ResultadoHTML(){
		
		String response = "<h1>El resultado final es: </h1>";
		return response;
	}

}