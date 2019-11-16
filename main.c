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





int main(int argc, char *argv[]) {
	
	// *********Actividad 1*************
	FILE *pa = NULL;
	FILE *pw= NULL;
	char t[30];
	int n=0,i;
	pa=fopen("Hola.txt","w+");
	if(pa==NULL)
	{
		printf("Error de apertura");
		return -1;
	}
	else 
	{	
		fputs("Hola mundo",pa);
		
	}
		pw=fopen("archivo_alreves.txt","w");
		if(pw==NULL)
		{
				printf("Error de apertura");
				return -2;
		}
		
		fputs("odnum aloH",pw);
		fputs("\nProcesado",pa);
	
	// *********Actividad 2*************
	FILE *px= NULL;
	px=fopen("suma.txt","r");
	int a,b;
	printf("Ingrese 2 numeros");
 	fscanf(px,"a: %d y b: %d ",a,b);
 	fclose(px);
	 printf("Los numeros son: %d %d",a,b);
	 printf("\nCreando un archivo de la suma de a y b");
	 FILE *po= NULL;
	 po=fopen("sumatoria.txt","w");
	 fprintf(po,"La suma es: %d",a+b);
	 printf("\nARCHIVO suma CREADO");
	 fclose(po);


	
getch();

return 0;
}


