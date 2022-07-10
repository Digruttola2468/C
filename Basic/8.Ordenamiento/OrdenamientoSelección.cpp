#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout<<endl<<"Ordenamiento Metodo: Seleccion"<<endl;
	
	int numeros[] = {3,2,1,5,4};
	int i,j,aux,min;
	
	//Algoritmo de Ordenamiento por Seleccion
	for(i=0 ; i<5 ; i++){
		min = i;
		
		for( j=i+1 ; j<5 ; j++){
			
			if(numeros[j] < numeros[min]){
				min = j;
			}
			
		}
		
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
		
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0 ; i<5 ; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<endl<<"Orden Descendente: ";
	for(i=4 ; i>=0 ; i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
