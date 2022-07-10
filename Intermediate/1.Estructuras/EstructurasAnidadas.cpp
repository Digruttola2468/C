#include<iostream>
#include<conio.h>
using namespace std;

struct info{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info dirEmpleado;
	double salario;
}empleados[2];

int main(){
	
	//Pidiendo datos de las estructuras
	for(int i=0 ; i<2 ; i++){
		fflush(stdin);				//Vaciar el buffer y permitir digitar los valores
		cout<<"Nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		
		cout<<"Direccion: ";
		cin.getline(empleados[i].dirEmpleado.direccion,30,'\n');
		
		cout<<"Ciudad: ";
		cin.getline(empleados[i].dirEmpleado.ciudad,20);
		
		cout<<"Provincia: ";
		cin.getline(empleados[i].dirEmpleado.provincia,20,'\n');
		
		cout<<"Salario: ";
		cin>>empleados[i].salario;
		
		cout<<"\n"<<endl;
	}
	
	//Mostrando datos
	for(int i=0 ; i<2 ; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dirEmpleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dirEmpleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dirEmpleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;	
		
		cout<<endl<<endl;
	}
	
	
	getch();
	return 0;
}
