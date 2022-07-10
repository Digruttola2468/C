//Ordenamientos MetodoBurbuja
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout<<endl<<"Ordenamiento Metodo: Burbuja"<<endl;
	
	int numeros[] = {3,2,1,4,5};
	int i,j,aux;
	
	//Algoritmo del metodo burbuja
	for(i=0 ; i<5 ; i++){
		for(j=0 ; j<5 ; j++){
			//Si 3 es mayor a 2
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];//aux = 3
				numeros[j] = numeros[j+1];//ahora es 2 enves de 3
				numeros[j+1] = aux;//ahora es 3 enves de 2
			}
			
		}
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0 ; i<5 ; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<endl<<"Orden Descendente: ";
	for(i = 4 ; i>=0 ; i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
