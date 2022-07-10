#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

void anadir();

int main(){
	
	anadir();
	
	getch();
	return 0;
}

void anadir(){
	ofstream archivo;
	string texto;
	
	archivo.open("AgregarTexto.txt",ios::app); //Abrir el archivo en modo agregar
	
	if(archivo.fail()){
		cout<<"No se puedo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite lo que quiera agregar: ";
	getline(cin,texto);
	
	archivo<<endl<<texto<<endl;
	
	archivo.close();
}
