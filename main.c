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
 

	float Cal=0;
	
	printf("Ingrese la calificacion: ");
	scanf("%f",&Cal);
	
	if(Cal>=5 && Cal<=10)
	{
		printf("\nAPTO");
	
	}
	else {
		if(Cal>=0 && Cal<5)
		{ 
		printf("\nNO APTO");
		}
		else 
		{
			printf("\n\aERROR: Nota incorrecta");
		}
	}
	
 	
	// *********Actividad 2*************
	
	int dia=0;
	
	printf("\n\nIntroduzca el numero el dia de la semana: ");
	scanf("%d",&dia);
	
	switch(dia) 
	{
	case 1: printf("\nLunes");
	        break;
	case 2: printf("\nMartes");
			break;
	case 3: printf("\nMiercoles");
			break;
	case 4: printf("\nJueves");
			break;
	case 5: printf("\nViernes");
			break;
    case 6: printf("\nSabado");
    		break;
    case 7: printf("\nDomingo");
	
	default: printf("ERROR: Dia incorrecto");
	}
	
	// *************************************Actividad EXTRA**********************************
	
	int w=0;
	
	printf("\n\nIngrese el numero de lo que desea hacer: \n1. Llamada telefonica.\n2. Mensaje de texto.\n3. Inciar videoconferencia\n4. Enviar mensaje por WhatsApp.\n5. Enviar mensaje por Messenger\n\n");
	scanf("%d",&w);
	
	switch(w)
	{
		
		case 1: printf("Usted ha seleccionado la opción: 1");
				break;
		case 2: printf("Usted ha seleccionado la opcion: 2");
				break;
		case 3: printf("Usted ha seleccionado la opcion: 3");
				break;			
		case 4: printf("Usted ha seleccionado la opcion: 4");
				break;
		case 5: printf("Usted ha seleccionado la opcion: 5");
				break;		
		default: printf("Lo sentimos, datos incorrectos");

	}
	
	
	
	
	
	
	
	
	getch();
	
	return 0;
}
