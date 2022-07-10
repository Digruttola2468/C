#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	//posicion:0,1,2,3,4
	//int a[] = {3,4,2,1,5};
	char a[] = {'a','e','i','o','u'};
	int i,dato;
	char band = 'F';//		'F' falso
	
	dato = 'a';
	
	//Busqueda Secuencial
	i=0;
	while( (band == 'F') && (i<5) ){		//Mientras band siga siendo falto
		
		if(a[i] == dato){					//Si la posicion del numero es igual al numero al buscar
			band = 'V';						//'V' verdadero
		}
		
		i++;								//Incrementa en 1
	}
	
	if(band == 'F'){
		cout<<"El numeros a Buscar no Existe en el Arreglo";
	}else if(band == 'V'){
		cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
