#include<iostream>
#include<conio.h>
using namespace std;

//Ejemplo: Sacar el valor absoluto de un numero

//Prototipo de Funcion
//Engloba a int,float,double en una misma variable
template <class GENERAL>

void mostrarAbs(GENERAL numero);

int main(){
	int num1 = -4;
	float num2 = -58.54;
	double num3 = -123.4334;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template<class GENERAL>
void mostrarAbs(GENERAL numero){
	if(numero<0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl<<endl;
}
