#include <stdio.h>
#include <stdlib.h>


/*
Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181
*/


int main(int argc, char *argv[]) {
	
	
	
	// *********Actividad 1*************
	
	int VentaEOE[6][10][2];
	int i=0,j=0,k=0,p=2;
	
	for(i=0;i<6;i++)
	{
		for (j=0;j<10;j++)
		{
			for (k=0;k<2;k++)
			{
				VentaEOE[i][j][k]=p+2;
			}
		}
	}
	printf("\t\t\tActividad 1\n");
	VentaEOE[3][7][1]=4234;
	printf("\nEl empleado 3, de la oficina 7, del edificio 2, ha vendido %d\n\n",VentaEOE[3][7][1]);
	
	 	// *********Actividad 2*************
	printf("\t\t\tActividad 2\n");
 	VentaEOE[3][7][1]=4234+10;
	printf("\nEl empleado 3, de la oficina 7, del edificio 2, ha vendido %d",VentaEOE[3][7][1]);
	printf("\n\nPosicion fuera del arreglo: %d",VentaEOE[13][22][10]);
	
	
	
	getch();
	
	return 0;
}
