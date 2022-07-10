#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//Clase
class Persona{
	//Atributos
	private:		
		int edad;
		string nombre;
	
	//Metodos
	public:
		Persona(int,string);	//Constructor Clase
		void Leer();
		void Correr();
};

//Constructor , nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::Leer(){
	cout<<"Soy "<<nombre<<" y estoy Leyendo"<<endl;
}

void Persona::Correr(){
	cout<<"Soy "<<nombre<<" y estoy Corriendo , tengo "<<edad<<endl;
}

int main(){
	
	Persona p1 = Persona(20,"Ivan");
	Persona p2(17,"Bripa");
	
	p1.Leer();
	p2.Correr();
	
	getch();
	return 0;
}
