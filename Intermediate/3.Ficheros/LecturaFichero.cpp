#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

void lectura();

int main(){
	
	lectura();
	
	getch();
	return 0;
}

void lectura(){
	
	ifstream archivo;
	string texto;
	
	archivo.open("LecturaFichero.cpp",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){//mientras no sea el final del archivo
		getline(archivo,texto);//copiamos el texto del txt al string texto
		cout<<texto<<endl;
	}
	archivo.close();
}
