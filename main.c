#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

/*
Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181
*/

void primo(int a);
int potencia(int z, int u);

int main(int argc, char *argv[]) {
	
	// *********Actividad 1*************
	int x=0;
	do 
	{
		printf("Ingrese un numero entero: ");
		scanf("%d",&x);	
	}while(x<0);
	primo(x);
	
	
	
	
	// *********Actividad 2*************
printf("\n\n\t\tACTIVIDAD 2");
int num,pot;

printf("\nIngrese el numero: ");
scanf("%d",&num);
printf("Ingrese la potencia: ");
scanf("%d",&pot);

printf("El numero %d elevado a la potencia %d es igual: %d ",num,pot,potencia(num, pot));



getch();

return 0;
}

void primo(int a)
{
	int i,k=0;
		
		for(i=1;i<a+1;i++)
		if(a%i==0)
		{
			k=k+1;		
		}

	if(k==2)
	{
		printf("El numero %d es primo.",a);
	}
	else 
	{
		printf("El numero %d no es primo.",a);
	}

}

int potencia(int z, int  u)
{
	int p=0;	
	p=pow(z,u);
	
	return p;
}
