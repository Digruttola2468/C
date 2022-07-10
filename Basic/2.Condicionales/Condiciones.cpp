#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero = 0;
	cout<<"Dame un Numero 1-10: ";cin>>numero;
	
	//Si numero es menor a 10  && (y) si numero es mayor a 1
	if(numero <= 10 && numero >= 1){
		cout<<endl<<"Correcto"<<endl;
	}else
		cout<<endl<<"Incorrecto"<<endl;
	
	getch();
	return 0;
}

