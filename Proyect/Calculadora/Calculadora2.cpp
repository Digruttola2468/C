#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void Introduccion();
int Eleccion = 0;

int main(){
	
	float valor1,valor2,valor3 = 0,aux = 0;
	
	Introduccion();
	
	switch(Eleccion){
		case 1: 
			cin>>valor1;
			cout<<"+"<<endl;
			cin>>valor2;
			aux = valor1 + valor2;
			cout<<"---------"<<endl<<aux<<endl<<"+"<<endl;
			break;
			
		case 2:
			cin>>valor1;
			cout<<"-"<<endl;
			cin>>valor2;
			aux = valor1 - valor2;
			cout<<"---------"<<endl<<aux<<endl<<"-"<<endl;
			break;
			
		case 3:
			cin>>valor1;
			cout<<"*"<<endl;
			cin>>valor2;
			aux = valor1 * valor2;
			cout<<"---------"<<endl<<aux<<endl<<"*"<<endl;
			break;
			
		case 4:
			cin>>valor1;
			cout<<"/"<<endl;
			cin>>valor2;
			aux = valor1 / valor2;
			cout<<"---------"<<endl<<aux<<endl<<"/"<<endl;
			break;
		
		case 5:
			cin>>valor1;
			cout<<"Raiz Cuadrada: ";
			aux = sqrt(valor1);
			cout<<aux<<endl;
			break;
		
		case 6:
			cin>>valor1;
			cout<<"%"<<endl;
			cin>>valor2;
			aux = (valor1 * valor2) / 100;
			cout<<"---------"<<endl<<aux<<endl;
			break;
		
		case 7:
			cin>>valor1;
			cout<<"Elevado: ";
			cin>>valor2;
			aux = pow(valor1,valor2);
			cout<<"---------"<<endl<<aux<<endl;
			break;
		
		case 8:
			cin>>valor1;
			cout<<"1/x: ";
			aux = 1/valor1;
			cout<<aux<<endl;
			break;
		
		case 9:
			cin>>valor1;
			cout<<"Coseno: ";
			aux = cos(valor1);
			cout<<aux<<endl;
			break;
		
		case 10:
			cin>>valor1;
			cout<<"Seno: ";
			aux = sin(valor1);
			cout<<aux<<endl;
			break;
		
		case 11:
			cin>>valor1;
			cout<<"Tangente: ";
			aux = tan(valor1);
			cout<<aux<<endl;
			break;
			
		case 12:
			cin>>valor1;
			cout<<"Expodencial: ";
			aux = exp(valor1);
			cout<<aux<<endl;
			break;
			
		case 13:
			cin>>valor1;
			cout<<"Valor absoluto: ";
			aux = fabs(valor1);
			cout<<aux<<endl;
			break;
			
		case 14:
			cin>>valor1;
			cout<<"Redondeo: ";
			aux = floor(valor1);
			cout<<aux<<endl;
			break;
			
		default:
			cout<<"Error en la Eleccion"<<endl;
	}
	
	int h=0 , j=0;
	for(h=0 ; h<=30 ; h++){
		if(Eleccion == 1){
			cin>>valor3;
			aux = aux + valor3;
			if(valor3 == 0){
				Introduccion();
				if(Eleccion == 2){
					cout<<endl<<aux<<endl<<"-"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						aux = aux - valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 2){
								h = 0;break;	
							}
						}
						cout<<"---------"<<endl<<aux<<endl<<"-"<<endl;
					}
				}
				
				if(Eleccion == 3){
					cout<<endl<<aux<<endl<<"*"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 3){
								h = 0;break;	
							}
						}
						aux = aux * valor3;
						cout<<"---------"<<endl<<aux<<endl<<"*"<<endl;
					}
				}
				
				if(Eleccion == 4){
					cout<<endl<<aux<<endl<<"/"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 4){
								h = 0;break;	
							}
						}
						aux = aux / valor3;
						cout<<"---------"<<endl<<aux<<endl<<"/"<<endl;
					}
				}
				
				if(Eleccion == 5){
					cout<<endl<<aux<<endl;
					cout<<"Raiz Cuadrada: ";
					aux = sqrt(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 6){
					cout<<endl<<aux<<endl<<"%"<<endl;
					
					cin>>valor3;
					aux = (aux * valor3)/100;
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 7){
					cout<<endl<<aux<<endl;
					cout<<"Elevar: ";
					cin>>valor3;
					aux = pow(aux,valor3);
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 8){
					cout<<endl<<"1/"<<aux<<endl;
					aux = 1/aux;
					cout<<"---------"<<endl<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 9){
					cout<<endl<<aux<<endl;
					
					cout<<"Coseno: ";
					aux = cos(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 10){
					cout<<endl<<aux<<endl;
					cout<<"Seno: ";
					aux = sin(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 11){
					cout<<endl<<aux<<endl;
					cout<<"Tangente: ";
					aux = tan(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 12){
					cout<<endl<<aux<<endl;
					cout<<"Expodencial: ";
					aux = exp(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 13){
					cout<<endl<<aux<<endl;
					cout<<"Valor Absoluto: ";
					aux = fabs(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 14){
					cout<<endl<<aux<<endl;
					cout<<"Redondeo: ";
					aux = ceil(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 15){
					break;
				}
			
			}
			cout<<"---------"<<endl<<aux<<endl<<"+"<<endl;
		}
			
		if(Eleccion == 2){
			cin>>valor3;
			aux = aux - valor3;
			if(valor3 == 0){
				Introduccion();
				if(Eleccion == 2){
					cout<<endl<<aux<<endl<<"-"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						aux = aux - valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 2){
								h = 0;break;	
							}
						}
						cout<<"---------"<<endl<<aux<<endl<<"-"<<endl;
					}
				}
				
				if(Eleccion == 3){
					cout<<endl<<aux<<endl<<"*"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 3){
								h = 0;break;	
							}
						}
						aux = aux * valor3;
						cout<<"---------"<<endl<<aux<<endl<<"*"<<endl;
					}
				}
				
				if(Eleccion == 4){
					cout<<endl<<aux<<endl<<"/"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 4){
								h = 0;break;	
							}
						}
						aux = aux / valor3;
						cout<<"---------"<<endl<<aux<<endl<<"/"<<endl;
					}
				}
				
				if(Eleccion == 5){
					cout<<endl<<aux<<endl;
					cout<<"Raiz Cuadrada: ";
					aux = sqrt(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 6){
					cout<<endl<<aux<<endl<<"%"<<endl;
					
					cin>>valor3;
					aux = (aux * valor3)/100;
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 7){
					cout<<endl<<aux<<endl;
					cout<<"Elevar: ";
					cin>>valor3;
					aux = pow(aux,valor3);
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 8){
					cout<<endl<<"1/"<<aux<<endl;
					aux = 1/aux;
					cout<<"---------"<<endl<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				if(Eleccion == 9){
					cout<<endl<<aux<<endl;
					
					cout<<"Coseno: ";
					aux = cos(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 10){
					cout<<endl<<aux<<endl;
					cout<<"Seno: ";
					aux = sin(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 11){
					cout<<endl<<aux<<endl;
					cout<<"Tangente: ";
					aux = tan(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 12){
					cout<<endl<<aux<<endl;
					cout<<"Expodencial: ";
					aux = exp(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 13){
					cout<<endl<<aux<<endl;
					cout<<"Valor Absoluto: ";
					aux = fabs(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 14){
					cout<<endl<<aux<<endl;
					cout<<"Redondeo: ";
					aux = ceil(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 15){
					break;
				}
			
			}
			cout<<"---------"<<endl<<aux<<endl<<"-"<<endl;		
		}
		
		if(Eleccion == 3){
			cin>>valor3;
			aux = aux * valor3;
			if(valor3 == 0){
				Introduccion();
				if(Eleccion == 2){
					cout<<endl<<aux<<endl<<"-"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						aux = aux - valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 2){
								h = 0;break;	
							}
						}
						cout<<"---------"<<endl<<aux<<endl<<"-"<<endl;
					}
				}
				
				if(Eleccion == 3){
					cout<<endl<<aux<<endl<<"*"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 3){
								h = 0;break;	
							}
						}
						aux = aux * valor3;
						cout<<"---------"<<endl<<aux<<endl<<"*"<<endl;
					}
				}
				
				if(Eleccion == 4){
					cout<<endl<<aux<<endl<<"/"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 4){
								h = 0;break;	
							}
						}
						aux = aux / valor3;
						cout<<"---------"<<endl<<aux<<endl<<"/"<<endl;
					}
				}
				
				if(Eleccion == 5){
					cout<<endl<<aux<<endl;
					cout<<"Raiz Cuadrada: ";
					aux = sqrt(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 6){
					cout<<endl<<aux<<endl<<"%"<<endl;
					
					cin>>valor3;
					aux = (aux * valor3)/100;
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 7){
					cout<<endl<<aux<<endl;
					cout<<"Elevar: ";
					cin>>valor3;
					aux = pow(aux,valor3);
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 8){
					cout<<endl<<"1/"<<aux<<endl;
					aux = 1/aux;
					cout<<"---------"<<endl<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				if(Eleccion == 9){
					cout<<endl<<aux<<endl;
					
					cout<<"Coseno: ";
					aux = cos(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 10){
					cout<<endl<<aux<<endl;
					cout<<"Seno: ";
					aux = sin(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 11){
					cout<<endl<<aux<<endl;
					cout<<"Tangente: ";
					aux = tan(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 12){
					cout<<endl<<aux<<endl;
					cout<<"Expodencial: ";
					aux = exp(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 13){
					cout<<endl<<aux<<endl;
					cout<<"Valor Absoluto: ";
					aux = fabs(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 14){
					cout<<endl<<aux<<endl;
					cout<<"Redondeo: ";
					aux = ceil(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 15){
					break;
				}
			
			}
			cout<<"---------"<<endl<<aux<<endl<<"*"<<endl;
						
		}
				
		if(Eleccion == 4){
			cin>>valor3;
			aux = aux / valor3;
			if(valor3 == 0){
				Introduccion();
				if(Eleccion == 2){
					cout<<endl<<aux<<endl<<"-"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						aux = aux - valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 2){
								h = 0;break;	
							}
						}
						cout<<"---------"<<endl<<aux<<endl<<"-"<<endl;
					}
				}
				
				if(Eleccion == 3){
					cout<<endl<<aux<<endl<<"*"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 3){
								h = 0;break;	
							}
						}
						aux = aux * valor3;
						cout<<"---------"<<endl<<aux<<endl<<"*"<<endl;
					}
				}
				
				if(Eleccion == 4){
					cout<<endl<<aux<<endl<<"/"<<endl;
					for(int k=0 ; k<=30 ; k++){
						cin>>valor3;
						if(valor3 == 0){
							Introduccion();
							if(Eleccion != 4){
								h = 0;break;	
							}
						}
						aux = aux / valor3;
						cout<<"---------"<<endl<<aux<<endl<<"/"<<endl;
					}
				}
				
				if(Eleccion == 5){
					cout<<endl<<aux<<endl;
					cout<<"Raiz Cuadrada: ";
					aux = sqrt(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 6){
					cout<<endl<<aux<<endl<<"%"<<endl;
					
					cin>>valor3;
					aux = (aux * valor3)/100;
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;	
				}
				
				if(Eleccion == 7){
					cout<<endl<<aux<<endl;
					cout<<"Elevar: ";
					cin>>valor3;
					aux = pow(aux,valor3);
					cout<<"---------"<<endl<<aux<<endl;
						
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 8){
					cout<<endl<<"1/"<<aux<<endl;
					aux = 1/aux;
					cout<<"---------"<<endl<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				if(Eleccion == 9){
					cout<<endl<<aux<<endl;
					
					cout<<"Coseno: ";
					aux = cos(aux);
					cout<<aux<<endl;
					
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 10){
					cout<<endl<<aux<<endl;
					cout<<"Seno: ";
					aux = sin(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 11){
					cout<<endl<<aux<<endl;
					cout<<"Tangente: ";
					aux = tan(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 12){
					cout<<endl<<aux<<endl;
					cout<<"Expodencial: ";
					aux = exp(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 13){
					cout<<endl<<aux<<endl;
					cout<<"Valor Absoluto: ";
					aux = fabs(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 14){
					cout<<endl<<aux<<endl;
					cout<<"Redondeo: ";
					aux = ceil(aux);
					cout<<aux<<endl;
					Introduccion();
					h = 0;
				}
				
				if(Eleccion == 15){
					break;
				}
			
			}
			cout<<"---------"<<endl<<aux<<endl<<"/"<<endl;		
		}
		
		if(Eleccion == 5){
			if(h != 0){
				cout<<endl<<aux<<endl;
				cout<<"Raiz Cuadrada: ";
				aux = sqrt(aux);
				cout<<aux<<endl;
			
				Introduccion();	
			}else
				Introduccion();
		}
		
		if(Eleccion == 6){
			if(h != 0){
				cout<<aux<<endl;
				cout<<"%"<<endl;
				cin>>valor3;
				aux = (aux * valor3) / 100;
				cout<<"---------"<<endl<<aux<<endl;
			
				Introduccion();	
			}else
				Introduccion();
		}
		
		if(Eleccion == 7){
			
		}
		
		if(Eleccion == 8){
			if(h != 0){
				cout<<endl<<"1/"<<aux<<endl;
				aux = 1/aux;
				cout<<"---------"<<endl<<aux<<endl;
				Introduccion();
			}else
				Introduccion();
		}
		
		if(Eleccion == 9){
			if(h!=0){
				cout<<endl<<aux<<endl;
				cout<<"Coseno: ";
				aux = cos(aux);
				cout<<aux<<endl;
				
				Introduccion();
			}else
				Introduccion();
		}
			
		
		
	}
	
	cout<<endl<<"Que tenga un muy Lindo Dia :)"<<endl;
	
	getch();
	return 0;
}

void Introduccion(){
	cout<<endl<<
		"1.Suma -"<<" 2.Resta -"<<" 3.Multiplicar"<<endl<<
		"4.Dividir -"<<" 5.Raiz -"<<" 6.Porsentaje"<<endl<<
		"7.Potencia -"<<" 8.1/x -"<<" 9.Coseno"<<endl<<
		"10.Seno -"<<" 11.Tangente -"<<" 12.Expodencial"<<endl<<
		"13.Valor Absoluto -"<<" 14.Redondeo -"<<" 15.Exit"<<endl;
	
	cout<<"Elegir: ";cin>>Eleccion;
	
	cout<<endl;
}
