#include<iostream>
#include<conio.h>
using namespace std;

//Estructura
struct Persona{
	char nombre[20];
	int edad;
}persona1;

int main(){
	
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<endl<<endl<<"------Imprimiendo------"<<endl<<endl;
	
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	
	
	getch();
	return 0;
}
