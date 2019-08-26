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
	
	float x,r; //Declaramos x y r; x es el valor a pedir. Con r calculamos el resultado.
	
	printf("Ingrese el valor de x\n"); //Pedimos el valor de x
	scanf("%f",&x);
	
	r=((x-1)/4)-((x-5)/36);  //Con el valor que nos dieron calculamos el resultado de la primera funcion algebraica
	printf("El resultado de la primera funcion es: %.3f\n",r); //Imprimimos el resultado de la primera funcion.
	
	return 0;
}
