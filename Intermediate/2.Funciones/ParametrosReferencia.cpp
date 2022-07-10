#include<iostream>
#include<conio.h>
using namespace std;

void valNuevo(int&,int&);		//variable& : Indicamos que va a ser de paso de referencia

int main(){
	
	int num1,num2;
	
	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;				//Digitamos los dos numeros
	
	valNuevo(num1,num2);			//Ahora pasamos los numeros a la Funcion
	
	cout<<"El nuevo valor del primer numero: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero: "<<num2<<endl;
	
	getch();
	return 0;
}

//Como la funcion tiene paso por referencia
void valNuevo(int& xnum,int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numeros es: "<<ynum<<endl;
	
	//Los valores que modificamos aca se modificaran en los valores que le enviamos a esta funcion
	//que son num1,num2
	xnum = 89;
	ynum = 100;
}
