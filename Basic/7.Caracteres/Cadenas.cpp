#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;

int main(){
	//*****************Entrada de Datos*****************
	
	//Otorgar una entrada sin espacios en blanco
	/*string prueba;
	cin>>prueba;
	cout<<"Entrada sin Espacios en blanco: "<<prueba<<endl;*/
	
	//Otorgar una entrada con espacios en blanco
	string prue;
	cout<<"Dame tu Nombre y Apellido: ";getline(cin,prue);
	cout<<endl<<"Entrada con Espacios en blanco: "<<prue<<endl;
	
	//*****************Salida de Datos*****************
	
	cout<<endl<<"Hola "<<prue<<endl;
	
	
	cout<<endl<<"Contiene "<<prue.size()<<" Caracteres";
	
	getch();
	return 0;
}
