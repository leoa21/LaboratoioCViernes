#include<stdio.h>

/*

Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181

*/

int main () {

	float x,w; // Declaramos x y w como flotantes; x es el valor a pedir. Con w calculamos el resultado de la segunda funcion.
	
	printf("Ingrese el valor de x: "); //Pedimos el valor de x
	scanf("%f",&x);

	w=2-(-2*(x+1)-((x-3)/3)); //Con el mismo valor de x calculamos el resultado de la segunda funcion.
	printf("\nEl resultado de la segunda funcion es: %.2f",w); //Impresion del resultado de la segunda funcion.
	
		
	return 0;
}
