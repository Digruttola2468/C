#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		//virtual va en la Clase Padre
		//Es la palabra reserbada para polimorfismo
		virtual void mostrar();
};

class Alumno : public Persona{
	private:
		float notaFinal;
	public:
		Alumno(string,int,float);
		void mostrar();
};

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};

Persona::Persona(string Nombre , int Edad){
	nombre = Nombre;
	edad = Edad;
}

Alumno::Alumno(string Nombre,int Edad,float Final) : Persona(Nombre,Edad){
	notaFinal = Final;
} 

Profesor::Profesor(string Nombre,int Edad,string Materia) : Persona(Nombre,Edad){
	materia = Materia;
}

void Alumno::mostrar(){
	Persona::mostrar();
	cout<<"Nota Final: "<<notaFinal<<endl<<endl;
}

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl<<endl;
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}

int main(){
	
	Persona *vector[2];
	
	vector[0] = new Alumno("Ivan",20,7.5);
	vector[1] = new Profesor("Mota",30,"CircuitoYRedes");
	vector[2] = new Persona("Bruno",21);
	
	vector[0]->mostrar();
	vector[1]->mostrar();
	vector[2]->mostrar();
	
	getch();
	return 0;
}

