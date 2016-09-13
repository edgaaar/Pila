#include "Pila.h"

Pila::Pila()
{
	this->H=NULL;
	this->T=NULL;
}

Pila::Pila(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
}

bool Pila::PilaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void Pila::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}

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
				//T = aux;
				//T->setSig(NULL);
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

/*Nodo* Pila::BuscarElemento(int Dato)
{
	if(!PilaVacia())
	{
		Nodo* aux = H;
		while(aux->getDato()!=Dato && aux != NULL)
			aux = aux->getSig();
		return aux;
	}
}*/

void Pila::VaciarPila(void)
{
	H = NULL;
	T = H;
}