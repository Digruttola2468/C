#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	
	float Numero = 0;
	
	cout<<"Dame un numero: ";cin>>Numero;
	
	//Redondea al entero mas pequeño
	cout<<"Entero mas pequeño: "<<ceil(Numero)<<endl;
	
	//Redondea al entero mas grande
	cout<<"Entero mas grande: "<<floor(Numero)<<endl;
	
	//Convierte a valor absoluto
	cout<<"Valor absoluto: "<<fabs(Numero)<<endl;
	
	//Raiz
	cout<<"Raiz Cuadrada: "<<sqrt(Numero)<<endl;
	
	//Elevar
	cout<<"Potencia al Cuadrado: "<<pow(Numero,2)<<endl;
	
	//Funcion Expodencial
	cout<<"Funcion Expodencial: "<<exp(Numero)<<endl;
	
	//Coseno
	cout<<"Coseno: "<<cos(Numero)<<endl;
	
	//Seno
	cout<<"Seno: "<<sin(Numero)<<endl;
	
	//Tangente
	cout<<"Tangente: "<<tan(Numero)<<endl;
	
	getch();
	return 0;
}
