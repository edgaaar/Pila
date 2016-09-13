#include "Nodo.h"

class Pila
{
public:
	Nodo* H;
	Nodo* T;	
	Pila();
	Pila(int Dato);
	bool PilaVacia();
	//void AddInicio(int Dato);
	void Push(int Dato);
	//void AddRef(int Dato, int Ref);
	//int RemoveInicio();
	int Pop();
	//int RemoveRef(int Ref);
	void VaciarPila();
	//Nodo* BuscarElemento(int Dato);
	void Show();
};