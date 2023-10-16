/**********************************************************************************************************************
Nombre del modulo:      Main.cpp
Nombre Aplicacion:      Sistema de farmacia
Autor:                  Carlos F. Roque
Lenguaje Desarrollo:    C++ Consola
Version:                1.0
Modulos externos:       Si
Estilo de codficacion:  Notacion Hungara, CamelCase
*
Descripcion:            Sistema de manejo de inventario y facturacion
*						de una farmacia en
*						consola escrito en C++
* 
* 
* 
Fecha:                  21/08/2023
**********************************************************************************************************************/

// control de nombre cientifico, marca, laboratorio, generica y control bajo receta.

#include <iostream>
#include <fstream>	// contiene tipos de procesamiento de flujos de archivos
#include <cstdlib>	// protitipo para exit(0)
#include "Menu.h"
#include "structs.h"
#include "Funciones.h"


using namespace std;

int main(void)
{
	unsigned short int	iOpcion = 0;
	Cliente Cc;
	

	while (!0)
	{
		system("cls");
		mostrarMenu();

		cout << "\n\n\tIngrese una Opcion:	";

		try
		{
			cin >> iOpcion;

			switch (iOpcion)
			{

				case 1:
				{
					ImprimirCliente(Cc);
					break;
				}
				case 2:
				{
					AgregarCliente(Cc);
					break;
				}
				case 3:
				{
					break;
				}
				case 4:
				{
					break;
				}
				case 5:
				{
					break;
				}
				case 6:
				{

					salir();
				}
				default:
				{
					cin.ignore();
					cin.clear();
					reset();
					break;
					
				}
			}
		}

		catch (exception)
		{
			cin.ignore();
			cin.clear();
			reset();
		}
	}
		return 0;
}