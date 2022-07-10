#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout<<endl<<"Ordenamiento Metodo: Insercion"<<endl;
	
	int numeros[] = {4,2,3,1,5};
	int i,pos,aux;
	
	//Algoritmo del Ordenamiento por Insercion
	for(i=0 ; i<5 ; i++){
		//ejemplo del segundo bucle osea i=1
		pos = i;
		aux  = numeros[i];//aux = 2
		
		//       pos = 1  y  4 > 2
		while( (pos>0) && (numeros[pos-1] > aux) ){
			numeros[pos] = numeros[pos-1];// 2 = 4
			pos--;//pero como pos decrementa en 1
		}
		//ahora pos = 0;
		numeros[pos] = aux;//ahora el aux = 2 se guarda en 0
		//numeros[2,4,3,1,5]
		
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
