// funciones.cpp
#include "structs.h"
#include "Funciones.h"
#include <iostream>
#include <fstream>

using namespace std;

unsigned short int i = 0;

void AgregarCliente(Cliente &c1)
{
	i = 0;

	cout << "Ingrese un nombre : ";
	while(!0)
	{

		if (c1.cNombre[i] == '\0')
			break;
		i++;
	}


	system("pause");
}
void ImprimirCliente(Cliente &c1)
{
	i = 0;

	while (!0)
	{
		if (c1.cNombre[i] == '\0')
			break;
		else
			cout << c1.cNombre[i];
		i++;
	}
	system("pause");
}