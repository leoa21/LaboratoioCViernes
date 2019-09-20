#include <stdio.h>
#include <stdlib.h>


/*
Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181
*/

#define NUM 10
int main(int argc, char *argv[]) {
	
	
	
	// *********Actividad 1*************

		float cal=0,prom=0;
		int i=0;
		
		
		for(i=1;i<11;i++)
		{
			printf("Ingrese la calificacion %d: ",i);
			scanf("%f",&cal);
			
			while(cal<0 || cal>10)
			{
			 printf("Dato incorrecto, ingrese la calificacion nuevamente: ");
			 scanf("%f",&cal);
			}
			prom=prom+cal;
			cal=0;
		}	
		
		prom=prom/NUM;
		if(prom>=7) 
		{
			printf("\nEl promedio del alumno fue: %.2f\nAPROBADO",prom);
		}
		else {
			printf("\nEl promedio del alumno fue: %.2f\nREPOBRADO",prom);
		}

	 	// *********Actividad 2*************

	int b=0,e=0,r=1;
	
	printf("\n\nPrograma que calcula la potencia de un numero");
	printf("\nIngrese el numero correspondiente a la de base: ");
	scanf("%d",&b);
	printf("Ingrese el numero correspondiente al exponente: ");
	scanf("%d",&e);
		
	for(i=0;i<e;i++)
	{
		r=r*b;
	}

	printf("\nEl resultado de el numero %d elevado a la potencia %d es igual a: %d",b,e,r);
 		
 	 	
	getch();
	
	return 0;
}
