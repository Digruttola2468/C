#include <iostream>
#include <conio.h>
using namespace std;

class Punto{
	
	private:
		int x,y;
	public:
		Punto();
		void setPunto(int,int);	//Establecemos los valores
		int getPuntoX();		//Obtenemos los valores
		int getPuntoY();
};

Punto::Punto(){
}

//Establecemos valores a los atributos
void Punto::setPunto(int _x, int _y){
	x = _x;
	y = _y;
}

//Mostramos valores de los atributos
int Punto::getPuntoX(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}

int main(){
	
	Punto punto1;
	
	punto1.setPunto(15,10);
	
	cout<<"X: "<<punto1.getPuntoX()<<endl;
	cout<<"Y: "<<punto1.getPuntoY()<<endl;
	
	getch();
	return 0;
}
