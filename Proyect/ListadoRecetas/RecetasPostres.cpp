#include <iostream>
#include <conio.h>
#include <fstream>		//File
#include <dirent.h>		//mkDir
#include <String.h>
using namespace std;






class InicioPrograma{
	private:
		string ruta,rutaPostre,rutaReceta;
	public:
		void CrearUbicacion();						//Preguntamos donde quiere guardar los Listados de Recetas y Postres
		bool is_dir(string);						//Comprobamos si el directorio para guardar esta bien ingresado
		void GuardarDatosPrograma(string);			//Guardatos el directorio para que no se vuelva a repetir
		bool wasDefined();							//Comprobamos si ya habia pasado por el metodo CrearUbicacion()
		string LeerDatoPrograma(int);				//Mostramos El Directorio para que sepa donde esta 
		string CrearCarpeta(string);				//Creamos la carpeta donde se guardaran las Recetas y Postres
		void CrearCarpeta();						//Crear Carpeta para colocar Recetas y Postres
		string getPostre();
		string getReceta();
		string getRuta();
};

void InicioPrograma::CrearUbicacion()
{
	//Pedimos al usuario para colocar una ruta
	cout << "\tSeleccione una ubicacion para Guardar Datos\t"<<endl;
	cout << "C:\\";
	getline(cin,ruta);
	
	ruta = "C:\\" + ruta;		
	
	if(is_dir(ruta) == false){									//si la ruta ingresada esta mal
		cout<<"Error al Colocar la Ruta: "<<ruta<<endl<<endl;
		ruta = "";
		CrearUbicacion();										//Volvemos a pedir los Datos
	}else{	
		cout<<endl;	
		
		GuardarDatosPrograma(ruta);				//Si se creo correctamente Guardamos los datos
	}
	
}


bool InicioPrograma::is_dir(string ruta){
	DIR * directorio;
	
	if(directorio = opendir(ruta.c_str())){
		closedir(directorio);
		return true;
	}else
		return false;
}

void InicioPrograma::GuardarDatosPrograma(string ruta){
	
	string rutaAbsoluta = "C:\\RecetaPostres\\";						//Creamos una carpeta en C:\ donde guardaremos los datos
	
	mkdir(rutaAbsoluta.c_str());										//Creamos la Carpeta
	
	ofstream archivo,archivoPostre,archivoReceta;
	archivo.open("C:\\RecetaPostres\\Ruta.txt",ios::app); 				//Crear archivo
	archivoPostre.open("C:\\RecetaPostres\\RutaPostre.txt",ios::app);	//Crear archivo Postre
	archivoReceta.open("C:\\RecetaPostres\\RutaReceta.txt",ios::app);	//Crear archivo Receta
	
	string Lugar = CrearCarpeta(ruta);
	
	rutaPostre = Lugar + "\\Postre";
	rutaReceta = Lugar + "\\Receta";
		
	CrearCarpeta();														//Creamos carpetas de Receta y Postre
	
	archivo<<Lugar<<endl;												//Colocar la Ruta ingresada por Usuario
	archivoPostre<<getPostre()<<endl;									//Agregamos la ruta del Postre
	archivoReceta<<getReceta()<<endl;									//Agregamos la ruta de la Receta
	archivo.close();
	
}

bool InicioPrograma::wasDefined(){
	
	ifstream archivo;
	string texto = "";
	
	archivo.open("C:\\RecetaPostres\\Ruta.txt",ios::in);
	
	getline(archivo,texto);			//Copiamos el texto del txt al string texto
	
	archivo.close();
	
	if(is_dir(texto) == false){
		return false;
	}else
		return true;
	
}

string InicioPrograma::LeerDatoPrograma(int eleccion){
	
	ifstream archivo;
	string texto = "";
	
	//Mostrar la ruta 
	if(eleccion == 1){
		archivo.open("C:\\RecetaPostres\\Ruta.txt",ios::in);
		getline(archivo,texto);									//copiamos el texto del txt al string texto
	}
	//Mostrar la ubicacion del Postre
	else if(eleccion == 2){
		archivo.open("C:\\RecetaPostres\\RutaPostre.txt",ios::in);
		getline(archivo,texto);		
	}
	//Mostrar la ubicacion de Receta
	else if(eleccion == 3){
		archivo.open("C:\\RecetaPostres\\RutaReceta.txt",ios::in);
		getline(archivo,texto);	
	}
		
	
	archivo.close();
	return texto;
}

string InicioPrograma::CrearCarpeta(string ruta){
	string carpeta = "";
	
	cout<<endl<<"\tDigite el Nombre de la Carpeta a Guardar\t"<<endl<<">>";
	getline(cin,carpeta);
	
	string LugarAbsolut = ruta + "\\" + carpeta;
	
	mkdir(LugarAbsolut.c_str());
	
	cout<<endl<<"--------------Lugar para guardar Recetas y Postres se ha creado Correctamente--------------"<<endl;
	
	return LugarAbsolut;
}

void InicioPrograma::CrearCarpeta(){
	mkdir(rutaReceta.c_str());			//Crearmos Carpeta de Receta
	mkdir(rutaPostre.c_str());			//Creamos Carpeta de Postre
}

string InicioPrograma::getPostre(){
	return rutaPostre;
}
string InicioPrograma::getReceta(){
	return rutaReceta;
}
string InicioPrograma::getRuta(){
	return ruta;
}










class Agregar : public InicioPrograma{
	private:
		string NombrePostre,NombreReceta;
		string contenido;
	public:
		void AgregarReceta();					//Agregamos la Receta
		void AgregarPostre();					//Agregamos un Postre
};

void Agregar::AgregarPostre(){
	//Pedimos el nombre del postre
	cout<<endl<<"Nombre Postre: ";
	cin>>NombrePostre;
	
	//Agregamos la extencion
	NombrePostre += ".txt";
	
	cout<<endl<<"Agregar Contenido del Postre: "<<endl<<"0.Terminar"<<endl<<endl;
	
	//Bucle para ir colocando lo que quiera
	for(int i=0; i<500 ; i++){
		string aux;
    	getline(cin,aux);
    	if(aux == "0")
    		break;
    	contenido = contenido + "\n" + aux;
	}
	
	//Obtiene la ruta leyendo el txt de Postres
	string ruta = LeerDatoPrograma(2);
	
	cout<<endl<<endl<<"Guardado en el archivo: "<<NombrePostre;		//Mostramos el nombre del archivo con extencion
	cout<<endl<<"Ruta: "<<ruta<<endl<<endl;							//Mostramos donde esta ubicado el archivo
	
	//Crear el  Archivo del Postre y su contenido
	string rutaTotal = ruta + "\\" + NombrePostre;
	
	ofstream archi;
	
	archi.open(rutaTotal.c_str(),ios::app); 						//Creamos y agregamos en la ruta
	
	archi<<contenido<<endl;											//Agregamos contenido al archivo
	
	archi.close();
	
	cout<<endl<<"Archivo y contenido del mismo agregado con Exito"<<endl<<endl;
}
void Agregar::AgregarReceta(){
	//Pedimos el nombre del receta
	cout<<endl<<"Nombre Receta: ";
	cin>>NombreReceta;
	
	//Agregamos la extencion
	NombreReceta += ".txt";
	
	cout<<endl<<"Agregar Contenido del Postre: "<<endl<<"0.Terminar"<<endl<<endl;
	
	//Bucle para ir colocando lo que quiera
	for(int i=0; i<500 ; i++){
		string aux;
    	getline(cin,aux);
    	if(aux == "0")
    		break;
    	contenido = contenido + "\n" + aux;
	}
	
	//Obtiene la ruta leyendo el txt de Receta
	string ruta = LeerDatoPrograma(3);
	
	cout<<endl<<endl<<"Guardado en el archivo: "<<NombreReceta;		//Mostramos el nombre del archivo con extencion
	cout<<endl<<"Ruta: "<<ruta<<endl<<endl;							//Mostramos donde esta ubicado el archivo
	
	//Crear el  Archivo de Receta y su contenido
	string rutaTotal = ruta + "\\" + NombreReceta;
	
	ofstream archi;
	
	archi.open(rutaTotal.c_str(),ios::app); 						//Creamos y agregamos en la ruta
	
	archi<<contenido<<endl;											//Agregamos contenido al archivo
	
	archi.close();
	
	cout<<endl<<"Archivo y contenido del mismo agregado con Exito"<<endl<<endl;
}











class List{
	private:
		string NombreArchivo;
	public:
		void Lista(string);								//Mostramos la Lista Recetas 
		void PedirDatos();								//Pedimos el Nombre del Archivo para mostrar
		void MostrarPantalla(string);					//Mostramos el Contenido del Postre o Receta Seleccionada en la Lista
};

void List::Lista(string dir){
	DIR * directorio;
	struct dirent * elemento;
	string elem;
	
	//Comprobamos si pudismo habrir el directorio
	if( directorio = opendir(dir.c_str()) ){
		while(elemento = readdir(directorio)){
			elem = elemento->d_name;
			cout << elem << endl;
		}
	}
	closedir(directorio);
}

void List::PedirDatos(){
	char verificar[20];
	bool Punto = false;
	
	//Pedimos que archivo quiere habrir
	cout<<endl<<endl<<"Elegir archivo: ";
	cin.ignore();
	cin.getline(verificar,20,'\n');
	
	//Comporbamos si posee la extencion del archivo
	for(int i=0 ; i<strlen(verificar) ; i++){
		if( verificar[i] == '.'){
			Punto = true;
			break;
		}	
	}
	
	//Si no puso la extencion la agregamos nosotros
	if(Punto == false){
		NombreArchivo.append(verificar);
		NombreArchivo += ".txt";
	}
	//Sino dejamos por defecto como lo puso el usuario
	else
		NombreArchivo.append(verificar);
	
	
}

void List::MostrarPantalla(string ruta){
	ifstream archivo;
	string texto;
	
	PedirDatos();									//Pedimos los datos para el NombreArchivo
	
	NombreArchivo = ruta + "\\" + NombreArchivo;	//Agregamos la ruta correcta
	
	archivo.open(NombreArchivo.c_str(),ios::in);	//Abrimos el archivo en modo read
	
	if(archivo.fail()){								//Si no se encuentra el archivo a leer
		cout<<endl<<"No se pudo abrir el archivo"<<endl<<endl;
		NombreArchivo = "";
	}else{
		cout<<endl<<"******************** Mostrando en Pantalla ********************"<<endl;
		while(!archivo.eof()){						//mientras no sea el final del archivo
			getline(archivo,texto);					//copiamos el texto del txt al string texto
			cout<<texto<<endl;						//Mostramos el string texto
		}
		NombreArchivo = "";							
		cout<<endl<<"****************************************"<<endl;
	}
	
	
	archivo.close();
}










int Introduccion();
void EliminarDatos();

int main(){
	
	InicioPrograma inicio1;
	
	List listaRePos;
	Agregar agregarRePos;
	
	
	if( inicio1.wasDefined() == false ){					//Si ha ocurrido un error con la eliminacion de carpetas
		EliminarDatos();									//Eliminamos los datos guardados por el programa
		inicio1.CrearUbicacion();							//Creamos una nueva con distinta ruta y nombre del usuario
	}
	else
		cout<<endl<<"Directory: "<<inicio1.LeerDatoPrograma(1)<<endl<<endl;
	
	
	for(;;){
		switch(Introduccion()){
		case 1:
			listaRePos.Lista(inicio1.LeerDatoPrograma(3));
			listaRePos.MostrarPantalla(inicio1.LeerDatoPrograma(3));
			break;
		case 2:
			listaRePos.Lista(inicio1.LeerDatoPrograma(2));
			listaRePos.MostrarPantalla(inicio1.LeerDatoPrograma(2));
			break;
		case 3:
			agregarRePos.AgregarReceta();
			break;
		case 4:
			agregarRePos.AgregarPostre();
			break;
		case 5:
			cout<<endl<<endl<<"Que tenga un Hermoso dia :)"<<endl<<endl;
			exit(1);
			break;
		
		default:
			cout<<endl<<endl<<"Error en la Eleccion"<<endl<<endl;
		
		}
		
	}
	
	getch();
	return 0;
}


int Introduccion(){
	int Eleccion;
	cout<<"1.ListadoRecetas		2.ListadoPostres	3.AgregarReceta		4.AgregarPostre		5.Salir";
	cout<<endl<<"Elegir: ";
	cin>>Eleccion;
	
	return Eleccion;	
}

void EliminarDatos(){
	remove("C:\\RecetaPostres\\Ruta.txt");
	remove("C:\\RecetaPostres\\RutaPostre");
	remove("C:\\RecetaPostres\\RutaReceta");
}
