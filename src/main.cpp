#include "Pila.h"

int main()
{
	Pila p = Pila();
	p.Pop();
	p.Push(4);
	p.Push(5);
	Pila p1 = Pila(11);
	p.Pop();
	p.Push(6);
	p1.Push(12);
	p.Push(7);
	p.Show();
	p1.Show();
	std::cout<<"Hello World"<<std::endl;
	return 0;
}