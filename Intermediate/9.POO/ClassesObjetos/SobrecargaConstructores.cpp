#include <iostream>
#include <conio.h>
using namespace std;

class Fecha{
	
	private:
		int dia,mes,anio;
	
	public:
		Fecha(int,int,int);		//Constructor1
		Fecha(long);			//Constructor2
		void mostrarFecha();
};

Fecha::Fecha(int _dia,int _mes , int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

// 9/1/2021  	----  20210109
Fecha::Fecha(long fecha){
	anio = int(fecha/10000);		//Extraer el anio
	mes = int( (fecha-anio * 10000) /100);
	dia = int(fecha-anio*10000-mes*100);
}

void Fecha::mostrarFecha(){
	cout<<"Dia/Mes/Año"<<endl<<endl;
	cout<<"Fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	
	Fecha f1(3,4,2021);
	Fecha f2(20210403);
	
	f1.mostrarFecha();
	f2.mostrarFecha();
	
	getch();
	return 0;
}
