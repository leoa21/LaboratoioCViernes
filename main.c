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
 	int z=0,a=0,x;
 	
 	do
	{
		x=0;
		printf("Ingrese un numero entero: ");
		scanf("%d",&a);
		
		printf("¿Desea introducir otro? \n\n0. Si\n\n1. No \n\n");
		scanf("%d",&x);
		
		z=z+a;
		a=0;
			} while(x==0);		
 	
 	printf("La suma de lo numeros introducidos es: %d",z);
 	
 	
 		// *********Actividad 2*************
 		
 		
 	int w=0;

 	while(w<=100)
 	{
 		w=0;
 		printf("\nIngrese un numero entero:  \n");
 	    scanf("%d",&w);
 	    if(w<=100) {
 	    	printf("El numero introducido es: %d\n",w);
		 }
		 
	 };

 	// *********Actividad Extra*************		
 	
 		
 	
 	w=0;
 	printf("\t\tActividad EXTRA");
 	do {
 		printf("\nIngrese un numero entero:  \n");
 	    scanf("%d",&w);
 	    if(w<=100)
 		printf("El numero introducido es: %d\n",w);
 	
		  }while(w<=100);
 	
 	 	
	getch();
	
	return 0;
}
