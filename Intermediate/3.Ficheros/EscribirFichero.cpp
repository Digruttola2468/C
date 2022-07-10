#include<iostream>
#include<conio.h>
#include<fstream> //Libreria de Ficheros
using namespace std;

void escribir();

int main(){
	escribir();
	
	
	getch();
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombreArchivo,frase;
	
	cout<<"Digite nombre de archivo: ";
	getline(cin,nombreArchivo);
	
	//c_str es obligatorio para que el string pase a File
	archivo.open(nombreArchivo.c_str(),ios::out);//Abriendo el archivo
	//el ios::out lo crea si no existe y si existe lo reemplaza
	
	if(archivo.fail()){//si archivo ocurrio un error coloca un true
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	//Guardar en el Txt
	
	cout<<"\nDigite el texto del archivo: ";
	getline(cin,frase);
	
	archivo<<frase;
	
	archivo.close();
}	
