#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero = 0;
	
	cout<<"Memoria del Vector: ";
	cin>>numero;
	
	int Vector[numero],aux = 0;
	
	cout<<endl;
	//Almacenando los numeros
	for(int i=0 ; i<numero ; i++){
		cout<<i+1<<".Dame un numero: ";
		cin>>aux;
		Vector[i] = aux;
	}
	
	cout<<endl;
	for(int i=0 ; i<numero ; i++){
		cout<<"["<<i+1<<"].Numero: "<<Vector[i]<<endl;
	}
	
	getch();
	return 0;
}
