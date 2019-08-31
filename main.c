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

	
	int x,y;
	printf("Introduzca un numero entero: ");
	scanf("%d",&x);
	printf("Introduzca otro numero entero: ");	
	scanf("%d",&y);
	
	if(x>y) {
		printf("El numero mas grande es: %d",x);
		
	}
	else {
		printf("El numero mas grande es: %d",y);
	}
	
	// *********Actividad 2*************
	
	int A=5,B=3,C=-12;
	
	printf("\nA=5\nB=3\nC=-12\n");
	printf("\nSi A>3");
	if(A>3) {
	
	printf("\nA es mayor a 3");
	
	}
	else {
	printf("\nA no es mayor a 3");
	}
	printf("\nA>C");
	if(A>C){
		printf("\nA es mayor a C");
		
	}
	else {
		printf("\nA no es mayor a C");
	}
	printf("\nB!=C");
	if(B!=C) {
		printf("\nB es diferente de C");
	}
	else {
		printf("\nB es igual a C");
	}
	printf("\nA=3");
	if(A==3){
		printf("\nA es igual a 3");
		
	}
	else {
		printf("\nA no es igual a 3");
		
	}
	printf("\nA*B=15");
	if(A*B==15) {
		printf("\nEl producto de A*B=15");
		
	}
	else {
		printf("\nA*B no es igual a 15");
	}
	printf("\n(C/B)<A");
	if(C/B<A) {
		printf("\nLa division de C/B=A");
	}
	else {
		printf("\nLa division de C/B no es igual a A ");
	}
	printf("\nC/B=-10");
	if(C/B==-10) {
		printf("\nLa division de C/B=-10");
	}
	else {
		printf("\nLa division de C/B no es igual a -10");
	}
	printf("\nA+B+C=5");
	if(A+B+C==5) {
		printf("\nLa suma de A+B+C=5");
	}
	else {
		printf("\nLa suma de A+B+C no es igual a 5");
	}
	int w=0,z=0;
	w=A+B;
	z=A-B;
	printf("\nA+B=8 y A-B=2");
	if(w==8 && z==2) {
		printf("\nLa suma de A+B=8 y el resultado de A-B=2");
	}
	printf("\nA+B=8 o B-A=6");
	if(w==8||z==6){
		printf("\nLa suma de A+B=8 o el resultado de A-B es igual a 6");
	}
	printf("\nA>3 y B>3 y C<3");
	if(A>3 && B>3 && C<3) {
		printf("\nA>3, B>3 y C<3");
	}
	else { 
	printf("\nA no es mayor 3, B no es mayor 3 o C no es menor a 3");
	}
	
	
	//**********Actividad Extra***************
	
	A=0;
	B=0;
	C=0;
	z=0;
	w=0;
	
  	printf("\nIngrese el valor de A: ");
  	scanf("%d",&A);
  	printf("\nIngrese el valor de B: ");
  	scanf("%d",&B);
  	printf("\nIngrese el valor de C: ");
  	scanf("%d",&C);

	printf("\nSi A>3");
	if(A>3) {
	
	printf("\nA es mayor a 3");
	
	}
	else {
	printf("\nA no es mayor a 3");
	}
	printf("\nA>C");
	if(A>C){
		printf("\nA es mayor a C");
		
	}
	else {
		printf("\nA no es mayor a C");
	}
	printf("\nB!=C");
	if(B!=C) {
		printf("\nB es diferente de C");
	}
	else {
		printf("\nB es igual a C");
	}
	printf("\nA=3");
	if(A==3){
		printf("\nA es igual a 3");
		
	}
	else {
		printf("\nA no es igual a 3");
		
	}
	printf("\nA*B=15");
	if(A*B==15) {
		printf("\nEl producto de A*B=15");
		
	}
	else {
		printf("\nA*B no es igual a 15");
	}
	printf("\n(C/B)<A");
	if(C/B<A) {
		printf("\nLa division de C/B=A");
	}
	else {
		printf("\nLa division de C/B no es igual a A ");
	}
	printf("\nC/B=-10");
	if(C/B==-10) {
		printf("\nLa division de C/B=-10");
	}
	else {
		printf("\nLa division de C/B no es igual a -10");
	}
	printf("\nA+B+C=5");
	if(A+B+C==5) {
		printf("\nLa suma de A+B+C=5");
	}
	else {
		printf("\nLa suma de A+B+C no es igual a 5");
	}
	w=A+B;
	z=A-B;
	printf("\nA+B=8 y A-B=2");
	
	if(w==8 && z==2) {
		printf("\nLa suma de A+B=8 y el resultado de A-B=2");
	}
	printf("\nA+B=8 o B-A=6");
	if(w==8||z==6){
		printf("\nLa suma de A+B=8 o el resultado de A-B es igual a 6");
	}
	printf("\nA>3 y B>3 y C<3");
	if(A>3 && B>3 && C<3) {
		printf("\nA>3, B>3 y C<3");
	}
	else { 
	printf("\nA no es mayor 3, B no es mayor 3 o C no es menor a 3");
	}
		

	return 0;
}
