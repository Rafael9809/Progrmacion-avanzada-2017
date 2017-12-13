//interprete cuadrado de numero 

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float n);

float numero;

int main(){
	pedirDatos();	
	al_cuadrado(numero);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
}

void al_cuadrado(float n){
	float cuadrado=0;
	
	cuadrado = numero*numero;
	
	cout<<"El cuadrado del numero es: "<<cuadrado<<endl;
}
