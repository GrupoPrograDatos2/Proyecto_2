package GenGladiator;
public class Nodo {
	public Nodo Anterior, Siguiente;
	public Gladiador Dato;



	public Nodo() {
		Dato =null;
		Anterior = Siguiente = null;
	}
    public Nodo(Gladiador c){
        Dato =c;
        Anterior = Siguiente = null;
	
    }
    
    public Gladiador getDato() {
        return Dato;
    }

    public void setDato(Gladiador Dato) {//Agrega dato al nodo
        this.Dato = Dato;
    }

    public Nodo getAnterior() {
        return Anterior;
    }

    public void setAnterior(Nodo Anterior) {
        this.Anterior = Anterior;
    }

    public Nodo getSiguiente() {
        return Siguiente;
    }

    public void setSiguiente(Nodo Siguiente) {
        this.Siguiente = Siguiente;
    }

}
