#include "Pila.h"

//Constructor vacío. Crea una pila de elementos nulos.
Pila::Pila()
{
	this->H=NULL;
	this->T=NULL;
}

//Constructor que recibe el dato del primer nodo que se creará.
Pila::Pila(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
}

//Verifica si la pila está vacía, de así serlo regresa TRUE
bool Pila::PilaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

//Muestra los elementos contenidos en la pila.
void Pila::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}

//Añade un elemento a la pila.
void Pila::Push(int Dato)
{
	Nodo* aux = new Nodo(Dato);
	if(!PilaVacia())
	{
		T->setSig(aux);
		T = aux;
	}else{
		H = aux;
		T = aux;
	}
}

//Elimina el primer elemento de la pila (LIFO), regresa el dato removido.
int Pila::Pop(void)
{
	if(!PilaVacia())
	{
		int Dato = T->getDato();
		if(H!=T)
		{
			Nodo* aux = H;
			while(aux->getSig()!=T)
			{
				aux = aux->getSig();
			}
			T = aux;
			T -> setSig(NULL);
		}else{
				H = NULL;
				T = NULL;
		}

		return Dato;
	}else{
		std::cout<<"La pila está vacía"<<std::endl;
		return (int)NULL;
	}	
}

//Asigna a H y a T como elementos nulos. Se obtiene una pila vacía.
void Pila::VaciarPila(void)
{
	this->H = NULL;
	this->T = NULL;
}