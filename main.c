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
	
	int numeroDeCoches[24]={ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}; 
	int R=2;
	printf("\t\tActividad 1 \nPrograma que muestra el total de coches en un hora en especifico\n\n");
	numeroDeCoches[R]=57;
	printf("En la hora %d hay un total de coches de %d\n",R,numeroDeCoches[R]);
	
	R=21;
	numeroDeCoches[R]=57;
	printf("En la hora %d hay un total de coches de %d\n",R,numeroDeCoches[R]);
	

	 	// *********Actividad 2*************
 
 	int A=8,B=4,Z=0;
 	printf("\n\t\tActividad 2 \nPrograma que determina el valor de la posicion que se encuetra en el resultado de la division de A y B\n");
 	printf("\nEl valor de A=%d\nEl valor de B=%d\n",A,B);
 	Z=A/B;
 	printf("El numero de coches en la posicion %d es %d",Z,numeroDeCoches[Z]);
 	
	getch();
	
	return 0;
}
