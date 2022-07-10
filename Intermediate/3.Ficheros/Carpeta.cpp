#include <iostream>
#include <conio.h>
#include <direct.h>		//mkDir
#include <string.h>

using namespace std;

void crearDirectorio(){
	cout<<"Ruta: ";
	string ruta;
	getline(cin,ruta);
	
	cout<<"Nombre Carpeta: ";
	string nombre;
	getline(cin,nombre);
	
	string rutaAbsoluta = ruta + nombre;
	
	//
	if (mkdir(rutaAbsoluta.c_str()) == 0)
		cout<<"Carpeta creada Correctamente"<<endl;
	else
		cout<<"Ha ocurrido un error al crear la carpeta"<<endl;
}

int main(){
	
	crearDirectorio();
	
	getch();
	return 0;
}
