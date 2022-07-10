#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int CantiFilas,CantiColum;
	
	cout<<"Memoria de Matrises"<<endl<<endl;
	cout<<"Filas: ";cin>>CantiFilas;
	cout<<"Columnas: ";cin>>CantiColum;
	
	int Matris[CantiFilas][CantiColum] , aux = 0;
	cout<<endl;
	//Alamacenando las matrises
	for(int i=0 ; i<CantiFilas ; i++){
		for(int j=0 ; j<CantiColum ; j++){
			cout<<"["<<i+1<<"]"<<"["<<j+1<<"]";
			cout<<".Dame un valor: ";
			cin>>aux;
			
			Matris[i][j] = aux;
		}
	}
	
	//Mostrando la matris
	for(int i=0 ; i<CantiFilas ; i++){
		for(int j=0 ; j<CantiColum ; j++){
			cout<<"["<<i+1<<"]"<<"["<<j+1<<"]";
			cout<<".Numero: "<<Matris[i][j]<<"	";
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
