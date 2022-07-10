#include<iostream>
#include<conio.h>
using namespace std;

void mostrarMatriz(int x[][3],int,int);
void cuadrado(int x[][3],int,int);
void MostrarCuadrado(int x[][3],int,int);

int main(){
	
	const int Filas = 2;
	const int Colum = 3;
	
	int m[Filas][Colum] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,Filas,Colum);
	cuadrado(m,Filas,Colum);
	MostrarCuadrado(m,Filas,Colum);
	
	getch();
	return 0;
}

void mostrarMatriz(int x[][3],int f,int c){
	
	cout<<"Mostrando Matriz original:\n";
	for(int i=0 ; i<f ; i++){
		for(int j=0 ; j<c ; j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

void cuadrado(int x[][3],int f,int c){
	cout<<endl<<"Elevando al Cuadrado . . ."<<endl;
	for(int i=0 ; i<f ; i++){
		for(int j=0 ; j<c ; j++){
			x[i][j] *= x[i][j];
		}
	}
}

void MostrarCuadrado(int x[][3],int f,int c){
	cout<<endl<<"Mostrando Resultado: "<<endl;
	for(int i=0 ; i<f ; i++){
		for(int j=0 ; j<c ; j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
}
