//Se necesita que el arreglo sea Ordenado
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	//		posicion 0,1,2,3,4
	int numeros[] = {1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band = 'F';
	
	dato = 4;								//Numero a buscar
	
	//Algoritmo Busqueda Binaria
	inf = 0;
	sup = 5;
	
	while(inf <= sup){						//Mientras 0 <= 5
		mitad = (inf+sup)/2;				//mitad = (0 + 5)/2
		
		if(numeros[mitad] == dato){			//Si el numero en la posicion de mitad es igual a dato
			band = 'V';						//Se encontro el numero y band se pasa a verdadero
			break;							//Sale del programa
		}
		
		if(numeros[mitad] > dato){			//Si el numero en la posicion de mitad es mayor a dato
			sup = mitad;					//sup = 2
			mitad = (inf+sup)/2;			//mitad = (0+2)/2
		}
		
		if(numeros[mitad] < dato){			//Si el numero en la posicion de mitad es menor a dato
			inf = mitad;					//inf = 2
			mitad = (inf+sup)/2;			//mitad = (2+5)/2
		}
	}
	
	if(band == 'V'){
		cout<<"El numeros a sido encontrado en la posicion: "<<mitad;
	}else
		cout<<"El numero NO a sido encontrado";
	
	
	getch();
	return 0;
}
