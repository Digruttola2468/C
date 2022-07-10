#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int Eleccion,i = 0;
	cout<<"Dame un valor: ";cin>>Eleccion;
	
	cout<<endl<<"Bucle For";
	for(int i=0 ; i<Eleccion ; i++){
		cout<<endl<<i;
	}
	
	cout<<endl;
	
	cout<<endl<<"Bucle Do While";
	do{
		cout<<endl<<i;
		i++;
	}while(i<Eleccion);
	
	cout<<endl;
	
	i = 0;
	cout<<endl<<"Bucle While";
	while(i<Eleccion){
		cout<<endl<<i;
		i++;
	}
	
	
	getch();
	return 0;
}
