#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Autor: Leonardo Damian Alvarez Mendoza
Fecha: 24/08/2019
Grupo: 006
Horario: Viernes 7am-9am
Matricula: 1986181
*/


void printfV(char lett, int val);

int main(int argc, char *argv[]) {
	
	
	
	// *********Actividad 1*************
	char Palabra[30];
	int i=0,j=0,p=0;
	printf("Escribe una palabra: ");
	gets(Palabra);
	i=strlen(Palabra)-1;
	for(j=0;j<i;j++,i--)
	{
		if(Palabra[j]==Palabra[i])
		p=1;
		else 
		p=0;
	}
	
	if(p==1)
	{
		printf("Es palindromo");
	}
	else 
	{
		printf("No es palindromo");
	}
	


	
	 	// *********Actividad 2*************
	
	printf("\n\t\tActividad 2\n\n");
	char string[10]={ };
	int contlet=0,aa=0,bb=0,cc=0,dd=0,ee=0,ff=0,gg=0,hh=0,ii=0,jj=0,kk=0,ll=0,mm=0,nn=0,oo=0,pp=0,qq=0,rr=0,ss=0,tt=0,uu=0,vv=0,ww=0,xx=0,yy=0,zz=0;
	i=0;
	printf("Ingrese una palabra de 1 a 10 letras: ");
	gets(string);
	contlet=strlen(string);
	while(contlet>10)
	{
		printf("Ingrese un palabra menor a %d",contlet);
		gets(string);
	}
	
	for(i=0;i<10;i++)
	{
		switch(string[i])
		{
			case 'a': aa++;break;
			case 'b': bb++;break;
			case 'c': cc++;break;
			case 'd': dd++;break;
			case 'e': ee++;;break;
			case 'f': ff++;break;
			case 'g': gg++;break;
			case 'h': hh++;break;
			case 'i': ii++;break;
			case 'j': jj++;break;
			case 'k': kk++;break;
			case 'l': ll++;break;
			case 'm': mm++;break;
			case 'n': nn++;break;
			case 'o': oo++;break;
			case 'p': pp++;break;
			case 'q': qq++;break;
			case 'r': rr++;break;
			case 's': ss++;break;
			case 't': tt++;break;
			case 'u': uu++;break;
			case 'v': vv++;break;
			case 'w': ww++;break;
			case 'x': xx++;break;
			case 'y': yy++;break;
			case 'z': zz++;break;
	}
}
		
	printfV('A',aa);
	printfV('B',bb);
	printfV('C',cc);
	printfV('D',dd);
	printfV('E',ee);
	printfV('F',ff);
	printfV('G',gg);
	printfV('H',hh);
	printfV('I',ii);
	printfV('J',jj);
	printfV('K',kk);
	printfV('L',ll);
	printfV('M',mm);
	printfV('N',nn);
	printfV('O',oo);
	printfV('P',pp);
	printfV('Q',qq);
	printfV('R',rr);
	printfV('S',ss);
	printfV('T',tt);
	printfV('U',uu);
	printfV('V',vv);
	printfV('W',ww);
	printfV('X',xx);
	printfV('Y',yy);
	printfV('Z',zz);

	getch();
	
	return 0;
}


void printfV(char lett, int val)
{
	if(val>0)
	printf("\n%c: %d",lett,val);
}
