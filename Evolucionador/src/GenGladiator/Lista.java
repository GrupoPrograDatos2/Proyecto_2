package GenGladiator;
public class Lista 
{
	Nodo head,temp;
	private int tamano = 0;
	
	public void Insert(Gladiador data)
	{
		temp=head;//El temporal es el inicio de la lista
		
		if(tamano>0)//Si el tamaño de la lista es mayor a cero
		{
			for(int c=1;c<tamano;c++)//recorre la lista hasta el final corriendo el temp
			{
				temp=temp.Siguiente;
			}
			temp.Siguiente=new Nodo();//Se inserta el nuevo nodo al final de la lista
			temp.Siguiente.setDato(data);
			tamano++;//El tamaño de la lista aumenta
		}
		else{	
			head=new Nodo();//Si la lista está vacía, encontes inserta el nodo al inicio
			head.setDato(data);
			tamano++;
		}
	}
	public Gladiador getData(int position)
	{
		temp=head;
		if(tamano>0)
		{
			for(int c=0;c<position;c++)
			{
				temp=temp.Siguiente;
			}
			return temp.getDato();
		}else{
			return temp.getDato();
		}
	}
	public void setData(int position, Gladiador data)
	{
		temp=head;
		if(tamano>0)
		{
			for(int c=0;c<position;c++)
			{
				temp=temp.Siguiente;
			}
			temp.setDato(data);
		}else{
			temp.setDato(data);
		}
	}
	public int getTamano()
	{
		return tamano;
	}
	public void Delete(int position)
	{
		temp=head;
		if(position==0)
		{
			head=head.Siguiente;
			tamano--;
		}else if(tamano>0)
			{
				for(int c=0;c<position-1;c++)
				{
					temp=temp.Siguiente;
				}
				if(temp.Siguiente.Siguiente!=null){
					temp.Siguiente=temp.Siguiente.Siguiente;
					tamano--;
				}else{
					temp.Siguiente=null;
					tamano--;
				}
			}else{
				head=head.Siguiente;
				tamano--;
			}
		
	}
}
