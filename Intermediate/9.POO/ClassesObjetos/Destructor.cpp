//Destructor
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Perro{
	private:
		string nombre,raza;
	public:
		Perro(string,string);	//Constructor
		//ALT + 126 = ~
		~Perro();				//Destructor
		void mostrarDatos();
		void jugar();
};

//Constructor
Perro::Perro(string _nombre,string _raza){
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro(){	
}

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl<<endl;
}

void Perro::jugar(){
	cout<<"El Perro/a "<<nombre<<" esta jugando"<<endl;
}

int main(){
	
	Perro perro1("Layca","Obejero");
	
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro(); //Destruyendo el Objeto
	
	
	cout<<endl;
	
	getch();
	return 0;
}
