#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

/*
Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181
*/

int sum(int *);
void cont(char *);
int x;
void printfV(char lett, int val);
int main(int argc, char *argv[]) {
	
	// *********Actividad 1*************
/*
	char c[30];
	printf("\t\tACTIVIDAD 1\n");
	printf("Ingrese una palabra: ");
	gets(c);
	cont(c);
*/	
	
	// *********Actividad 2*************
	int val[2];
	
	printf("\n");
	printf("\t\tACTIVIDAD 2");
	printf("\n");
	printf("Ingrese el valor A: ");
	scanf("%d",&val[0]);
	printf("Ingrese el valor B: ");
	scanf("%d",&val[1]);
	
	printf("La suma de %d + %d es igual a %d",val[0],val[1],sum(val));


getch();

return 0;
}

int sum(int *val)
{
	int suma=0;
	suma=*val;
	suma=suma+*++val;
	return suma;
}
/*
void cont(char *c)
{
	int aa,ee,ii,oo,uu,j;
	while(*c++)
	{	
			switch(tolower(*c))
			{
				case 'a': aa++;
				break;
				case 'e': ee++;
				break;
				case 'i': ii++;
				break;
				case 'o': oo++;
				break;
				case 'u': uu++;
				break;
			}
	}	printf("\n\tVocales");
	  	printfV('a',aa);
		printfV('e',ee);
		printfV('i',ii);
		printfV('o',oo);
		printfV('u',uu);	
}
		
		
	

void printfV(char lett, int val)
{
	if(val>0)
	printf("\n%c: %d",lett,val);
}
*/
