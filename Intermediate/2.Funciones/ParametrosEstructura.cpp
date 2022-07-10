#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
	char nombre[30];
	int edad;
}p1;

//Prototipo de la funcion
void pedirDatos();
void MostrarDatos(persona);

int main(){
	
	pedirDatos();
	MostrarDatos(p1);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"Edad: ";
	cin>>p1.edad;
}

void MostrarDatos(persona p){
	cout<<endl<<"Imprimiendo los datos . . ."<<endl<<endl;
	cout<<"Nombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}
