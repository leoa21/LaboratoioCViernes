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



#define SIZE_NAME 30
#define SIZE 4
struct pictures_info
{
	char name[SIZE_NAME];
	int date_time;
};

struct cordinates
{
	int latitude;
	int longitude;
}places[SIZE];


int main(int argc, char *argv[]) {
	
	// *********Actividad 1*************
	
	
	 int i;
	struct pictures_info pic[2];
	struct pictures_info *ptr;
	ptr=pic;
	
	for(i=0;i<2;i++)
	{
		fflush(stdin);
		printf("Ingrese el nombre de la foto: ");
		gets((ptr+i)->name);
		printf("Ingrese la fecha: ");
		scanf("%d",&(ptr+i)->date_time);
		printf("\n");
	}
	
	
		
	// *********Actividad 2*************
	int a,j,aux;
	struct cordinates *p;
	int lon[4],lat[4];
	
	p=places;
	
	places[0].latitude=200;	
	places[0].longitude=300;
	places[1].latitude=400;
	places[1].longitude=100;
	places[2].latitude=100;
	places[2].longitude=400;
	places[3].latitude=300;
	places[3].longitude=200;
	
	printf("\n\t\t\tActividad 2\n");	
	
	
		printf("De que forma desea acceder a los datos?\n");
		printf("\n1.Tal y como han sido agregados.\n2.Por latitud.\n3.Por longitud.\n\n");
		scanf("%d",&a);	
	
		
	
	
	printf("\n");
	
	switch (a)
	{
		case 1: for (i=0;i<4;i++)
			{
				printf("Latidud: %d\n",places[i].latitude);
				printf("Longitud:%d\n",places[i].longitude);
			};
			break;	
			
		case 2: for(i=0;i<4;i++)
				{	
				lat[i]=(p+i)->latitude;	
				}
				
				for(i=1;i<4;i++)
				{
					for(j=0;j<3;j++)
					{
						if(lat[j]>lat[j+1])
						{
							aux=lat[j];
							lat[j]=lat[j+1];
							lat[j+1]=aux;
						}
					}
				}
				for(i=0;i<4;i++)
				{
					printf("Latitud: %d",lat[i]);
					printf("\n");
				}
				break;
				
		case 3: aux=0;
				for(i=0;i<4;i++)
				{	
					lon[i]=(p+i)->longitude;	
				}
	
				for(i=1;i<4;i++)
				{
					for(j=0;j<3;j++)
					{
						if(lon[j]>lon[j+1])
						{
							aux=lon[j];
							lon[j]=lon[j+1];
							lon[j+1]=aux;
						}
					}
				}
				for(i=0;i<4;i++)
				{
				printf("Longitud: %d",lon[i]);
				printf("\n");
				}
				break;
		default: printf("INGRESO DATOS INCORRECTOS");		
	}
	
getch();

return 0;
}


