#include <iostream>
#include "dinamico.h"

void modificar(int *a)
{
	*a=*a=1;
}
int main()
{
	Dinamico dinamico;
	dinamico.insertar_final(8);
	dinamico.insertar_final(7);
	dinamico.insertar_final(6);
	dinamico.insertar_final(5);
	dinamico.insertar_final(3);
	dinamico.insertar_final(4);
	dinamico.insertar_final(2);
	dinamico.insertar_final(1);
	dinamico.insertar_inicio(-20);
	dinamico.insertar_inicio(-10);
	
    for (size_t i=0; i< dinamico.size(); i++)
    {
    	cout << dinamico[i] << " ";
    	
	}
	
	
}


