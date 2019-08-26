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
	
 	float x,z; // Declaramos x y z como flotantes; x es el valor a pedir. Con z calculamos el resultado de la primer funcion. 
	printf("Ingrese el valor de x: "); //Pedimos el valor de x
	scanf("%f",&x);

	z=((2/3)*(x-(1-((x-2)/3))))+1; //Con el valor que nos dieron calculamos el resultado de la primer funcion 
	printf("\nEl resultado de la primer funcion es %.2f",z); //Imprimimos el resultado de la primera funcion.
	
	
	
	
	return 0;
}
