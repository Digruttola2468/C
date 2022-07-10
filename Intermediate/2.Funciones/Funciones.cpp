#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
int encontrarMax(int x,int y);

int main(){
	int n1,n2;
	int mayor;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
	
	mayor = encontrarMax(n1,n2);
	
	if(mayor == 0){
		cout<<"Los dos numeros son iguales: "<<n1<<" , "<<n2<<endl;
	}else
		cout<<"El mayor de los 2 numeros es: "<<mayor<<endl;
	
	getch();
	return 0;
}

//Definicion de Funcion
int encontrarMax(int x,int y){
	int numMax;
	if(x>y)
		numMax = x;
	else if(x<y)
		numMax = y;
	else{
		numMax = 0;	
		cout<<"Son Iguales";
	}
	return numMax;
}
