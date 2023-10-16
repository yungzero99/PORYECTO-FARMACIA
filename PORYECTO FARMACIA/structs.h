//Declaraciones.h
#pragma once
#ifndef DECLARACIONES_H
#define DECLARACIONES_H


struct Cliente
{
	char				cNombre[50];
	char				cTelefono[10];
	unsigned short int	iEdad;
};


struct FechaVencimiento
{
	unsigned short int	Dia; // 1 - 31
	unsigned short int	Mes; // 1 - 12
	unsigned short int	Anyo; // 2023 - 2026+
};

struct Producto
{
	char Nombre[40];
	float Precio;
	FechaVencimiento Caduccion;

	/*	Producto(char Nombre[], float Precio, unsigned short int Dia, unsigned short int Mes, unsigned short int Anyo)
		{
			i = 0;

			while (!0)
			{
				if (Nombre[i] == '\0')
					break;

				else
				{
					this->Nombre[i] = Nombre[i];
				}
			}

			this->Precio = ((Precio < 0) ? 0 : Precio);
			this->Caduccion.Dia = ((Dia < 1) ? 1 : Dia);
			this->Caduccion.Mes = ((Mes < 1) ? 1 : Mes);
			this->Caduccion.Anyo = ((Anyo <= 2023) ? 2023 : Anyo);


		};*/
};


#endif

