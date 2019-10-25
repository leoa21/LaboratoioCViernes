#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

/*
Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181
*/

typedef struct  
	{
		char nom[60];
		char sex[10];
		int edad;
		float notas[5];
	}Estudiante;

typedef struct 
{
	char nom_p[40];
	char sex_p;
	float peso;
	int a_nacimiento;
}Panda;

void LeerPanda();
int EdadPanda( int p);
int Tenerbebes(int t, char g);
int edad,x;

int main(int argc, char *argv[]) {
	
	// *********Actividad 1*************
	Estudiante est[60];
	int i=0,k=0,N=0;
	float prom_may=-1,prom;
	char stud_may[60];
	
	do
	{
		printf("Ingrese el numero de estudiantes: ");
		scanf("%d",&N);
	}while(N<1 || N>60);
	
	for(i=1;i<=N;i++){
		
		fflush(stdin);
		printf("Ingrese el nombre del alumno %d: ",i);
		gets(est[i].nom);
		printf("Ingrese el sexo: ");
		gets(est[i].sex);
		printf("Ingrese la edad: ");
		scanf("%d",&est[i].edad);
		prom=0.0;
		for(k=0;k<5;k++)
		{	
			do 
			{
			printf("Ingrese la calificacion del parcial %d: ", k+1);
			scanf("%f",&est[i].notas[k]);
			
			}while(est[i].notas[k]<0 || est[i].notas[k]>100);
			prom=prom + est[i].notas[k];	
		}
		prom=prom/5;
		printf("El promedio del alumno %s es: %.2f\n\n",est[i].nom,prom);
		if(prom>prom_may)
		{
			prom_may=prom;
			strcpy(stud_may,est[i].nom);
		}
	}
	printf("El alumno %s obtuvo el promedio mas alto con: %.2f",stud_may,prom_may);

	
	
	// *********Actividad 2*************

	printf("\n\n\t\tACTIVIDAD 2");
	LeerPanda();
	
	getch();
	return 0;
}

void LeerPanda()
{		Panda oso;
		fflush(stdin);
		printf("\n\t      DATOS DEL PANDA\n\n");
		printf("Ingrese el nombre del panda: ");
		gets(oso.nom_p);
		printf("Ingrese el sexo: \nh: hembra.\nm: macho: ");
		oso.sex_p=getchar();
		tolower(oso.sex_p);
		printf("Ingrese el peso: ");
		scanf("%f",&oso.peso);
		printf("Ingrese el a%co de nacimiento: ",164);
		scanf("%d",&oso.a_nacimiento);
		edad=oso.a_nacimiento;
		EdadPanda(edad);
		Tenerbebes(edad, oso.sex_p);
		if(x==1)
		{
			printf("El panda %s de sexo %c con edad de: %d a%cos, puede tener bebes",oso.nom_p,oso.sex_p,edad,164);
		}
		else 
		{
			printf("El panda %s de sexo %c con edad de: %d a%cos, no puede tener bebes",oso.nom_p,oso.sex_p,edad,164);
		}
	
		
}

int EdadPanda(int p)
{
	edad=2019-edad;
	
	return edad;
}

int Tenerbebes(int t,char g)
{ 
	if(edad>5 && g=='h')
	{
		x=1;
	}
	else 
	{
		x=0;
	}
return x;
}
