#include<iostream>
#include<conio.h>
using namespace std;

void calcular(int,int,int&,int&);

int main(){
	
	int num1,num2,suma = 0,producto = 0;
	
	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;
	
	calcular(num1,num2,suma,producto);
	
	cout<<"Resultado Suma: "<<suma<<endl<<endl;
	cout<<"Resultado Multiplicacion: "<<producto<<endl;
	
	getch();
	return 0;
}

void calcular(int x,int y,int& sum,int& produc){
	
	sum = x + y;
	produc = x * y;
	
}
