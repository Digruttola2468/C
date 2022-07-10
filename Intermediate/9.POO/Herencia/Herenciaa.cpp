#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class  Persona{
	private :
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

//Herencia , Alumno es clase hija de la Clase Persona
class Alumno : public Persona{
	private:
		string codigoAlumno;
		float notaFinal;
	public:
		Alumno(string,int,string,float);
		void mostrarAlumno();
};

//Constructor de la clase Persona
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

//Constructor de la clase hija de Persona
Alumno::Alumno(string Nombre,int Edad,string Codigo,float Final) : Persona(Nombre,Edad){
	codigoAlumno = Codigo;
	notaFinal = Final;
}


void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
	cout<<"Clasificacion: "<<notaFinal<<endl<<endl;
}

int main(){
	
	Alumno alumno1("Ivan",20,"2",7.4);
	alumno1.mostrarAlumno();
	
	getch();
	return 0;
}
