#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

using namespace std;

void CreandoArchivos();
void EscribirEnArchivos();
void LeerDeArchivo();
void BusquedaDeArchivos();
void ModificarArchivo();
void EliminarRegistroArchivo();
void FiltrarDeArchivo();

typedef struct Registro_Alumnos{
	char matricula[15];
	char nombre[20];
	char apellido[20];
	int nota;
}reg_alumno;

int main(){
	setlocale(LC_CTYPE, "spanish");
	system("color 1F");
	
	int menu;
	int salir;
	char salir1;
	
	cout<<"=========================" <<endl;
	cout<<"Menú Programa de Archivos" <<endl;
	cout<<"=========================" <<endl <<endl;
	cout<<"1.Grabar archivos" <<endl;
	cout<<"2.Grabación/inersión de nuevos datos" <<endl;
	cout<<"3.Lectura masiva de datos" <<endl;
	cout<<"4.Búsqueda de datos" <<endl;
	cout<<"5.Modificación de datos" <<endl;
	cout<<"6.Eliminación de datos" <<endl;
	cout<<"7.Filtrado de datos" <<endl;
	cout<<"8.Salir del sistema" <<endl <<endl;
	cout<<"Elija una opción: ";
	cin>> menu;
	switch(menu){
		case 1: 
			system("cls");
			
			CreandoArchivos();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 2: 
			system("cls");
			
			EscribirEnArchivos();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 3: 
			system("cls");
			
			LeerDeArchivo();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 4:
			system("cls");
			 
			BusquedaDeArchivos();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 5:
			system("cls");
			
			ModificarArchivo();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 6:
			system("cls");
			
			EliminarRegistroArchivo();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 7:
			system("cls");
			
			FiltrarDeArchivo();
			
			cout<<"¿Qué desea hacer?" <<endl <<endl;
			cout<<"1.Regresar al menú principal" <<endl;
			cout<<"2.Salir del programa" <<endl <<endl;
			cout<<"Elija una opción: ";
			cin>> salir;
			
			if(salir == 1){
				system("cls");
				
				return main();
			}
			else{
				cout<<"Gracias por utilizzr el programa" <<endl <<endl;  
				
				return 0;
			}
		break;
		
		case 8:
			system("cls");
			
			cout<<"¿Desea salir del sistema? (sí= s o no= n): ";
			cin>> salir1;
			
			if((salir1 == 's') || (salir1 == 'S')){
				system("cls");
				
				cout<<"Gracias por utilizar el sistema de archivos" <<endl <<endl;
				
				return 0;
			}
			else{
				system("cls");
				
				return main();
			}
		break;	
	}
	
	system("pause");
	
	return 0;
}

void CreandoArchivos(){
	char nombre_archivo[50];
	char opcion;
	
	do{
		system("cls");
		
		cout<<"Ingrese el nombre del archivo que quiere crear: ";
		cin>> nombre_archivo;
	
		//Abriendo archivo
		ifstream Archivo(nombre_archivo, ios::in | ios::binary);
	
		//Si el archivo existe, de lo contrario si el archivo existe...
		if(!Archivo){
			//Creando los archivos, y los limpia
				ofstream Archivo(nombre_archivo, ios::out | ios::binary);
		
				if(!Archivo){
				//Error del sistema
				cerr<<" Error: ¡No se pudo crear el archivo " <<nombre_archivo <<", por alguna extraña razón!" <<endl;
				exit(1);
			}
			else{
				cout<<"El archivo de nombre " <<nombre_archivo <<", fue creado satisfactoriamente" <<endl;
			}
		}
		else{
			cout<<"¡El archivo " <<nombre_archivo <<", ya existe, por lo que no fue creado nuevamente!" <<endl;
		}
		cout<<"¿Desea crear otro archivo? (sí= s/no= n): ";
		cin>> opcion;
	}while((opcion == 's') || (opcion == 'S') );
}

void EscribirEnArchivos(){
	reg_alumno datos_alumno;
	char nombre_archivo[50];
	char opcion;
	
	cout<<"Ingrese el nombre del archivo: ";
	cin>> nombre_archivo;
	
	//Si el archivo ya tiene datos, la información a grabar, se guardará después del último dato que trnga el archivo
	ofstream Archivo("alumnosumg.dat", ios::app | ios::binary);
	
	if(!Archivo){
		cerr<<" Error: ¡No se pudo abrir el archivo " <<nombre_archivo <<", por alguna extraña razón!" <<endl;
		exit(1);
	}
	else{
		do{
			system("cls");
			
			cout<<"Ingrese los datos de un alumno: " <<endl;
			cout<<"================================" <<endl;
			fflush(stdin);
			cout<<"No. de carné: "; cin.getline(datos_alumno.matricula, 15, '\n');
			cout<<"Nombre: "; cin.getline(datos_alumno.nombre, 20, '\n');
			cout<<"Apellido: "; cin.getline(datos_alumno.apellido, 20, '\n');
			fflush(stdin);
			cout<<"Nota: "; cin>> datos_alumno.nota;
			cout<<"================================" <<endl;
			
			//Guardar información dentro del archivo para variablesde tipo caracter
			Archivo.write(reinterpret_cast <char*>(&datos_alumno), sizeof(reg_alumno));
			cout<<"¿Desea ingresar los datos de otro alumno? (sí= s/no= n): ";
			cin>> opcion;
		}while(opcion == 's' || opcion == 'S');
	}
}

void LeerDeArchivo(){
	reg_alumno datos_alumno;
	char nombre_archivo[50];
	char opcion;
	
	cout<<"Ingrese el nombre del archivo del que desea leer los datos de un alumno: ";
	cin>> nombre_archivo;
	
	ifstream Archivo(nombre_archivo, ios::in | ios::binary);
	
	if(!Archivo){
		cerr<<" Error: ¡No se pudo abrir el archivo " <<nombre_archivo <<", porque puede ser, que no exista!" <<endl;
		exit(1);
	}
	else{
		system("cls");
		
		cout<<"LOS DATOS DE LOS ALUMNOS, SON: " <<endl;
		cout<<"================================" <<endl;
		cout<<"No. de carné     Nobre Completo               Nota" <<endl;
		cout<<"================================" <<endl;
		
		//Lectura de datos almacenados en un archivo
		while(Archivo.read(reinterpret_cast <char*>(&datos_alumno), sizeof(reg_alumno))){
			cout<<datos_alumno.matricula <<"     " <<datos_alumno.nombre <<"  " <<datos_alumno.apellido <<" " <<datos_alumno.nota <<endl;
		};
	}
} 

void BusquedaDeArchivos(){
	reg_alumno datos_alumno;
	char nombre_archivo[50];
	char opcion;
	char CarneBusqueda[15]; //15, es el tamaño o la dimensión, que tiene el campo, para ingresar la cadena de caracteres de 0 a 14
	bool bandera;
	
	cout<<"Ingrese el nombre del archivo del que desea leer los datos de un alumno: ";
	cin>> nombre_archivo;
	
	ifstream ArchivoDeBusqueda(nombre_archivo, ios::in | ios::binary);
	
	if(!ArchivoDeBusqueda){
		cerr<<" Error: ¡No se pudo abrir el archivo " <<nombre_archivo <<", porque puede ser, que no exista!" <<endl;
		exit(1);
	}
	else{
		do{
			system("cls");
			
			bandera = false;
			
			cout<<"Ingrese el carné del alumno que busca: ";
			cin>> CarneBusqueda;
			
			while(ArchivoDeBusqueda.read(reinterpret_cast <char*>(&datos_alumno), sizeof(reg_alumno))){
				if( strcmp(datos_alumno.matricula, CarneBusqueda) == 0){
					cout<<"\n\t=====================================" <<endl;
					cout<<"\tLos datos del alumno buscado, son:" <<endl;
					cout<<"\t=====================================" <<endl;
					cout<<"\tCarné: " <<datos_alumno.matricula <<endl;
					cout<<"\tNombre: " <<datos_alumno.nombre <<endl;
					cout<<"\tApellidos: " <<datos_alumno.apellido <<endl;
					cout<<"\tNota: " <<datos_alumno.nota <<endl;
					cout<<"\t=====================================" <<endl;
					
					bandera = true; break;
				}
			};
			
			if(bandera == false){
				system("cls");
				cout<<"Registro no encontrado" <<endl;
			}
			
			cout<<"\n\n¿Desea buscar los datos de otro alumno? (sí= n o no= n): ";
			cin>> opcion;
			
			if((opcion == 's') || (opcion == 'S') ){
				ArchivoDeBusqueda.clear();
				
				//(0 saltos, ir al inicio)
				ArchivoDeBusqueda.seekg(0, ArchivoDeBusqueda.beg);
			}
		}while((opcion == 's') || (opcion == 'S') );
	}
} 

void ModificarArchivo() {
	string NombreArchivo;
	bool bandera=false;
	char carnetB[15], nomape[40], opcion;
	reg_alumno datos_alumno;

	do {
		bandera=false;
		
		ofstream ArchivoAux ("ArchAux.dat", ios::out | ios::binary);
		ifstream ArchivoLectura ("alumnosumg.dat", ios::in | ios::binary);
	
		if (ArchivoLectura.fail() || ArchivoAux.fail()) { //Validación de apertura de los 2 archivos
			cerr<<"\nError: ¡El archivo auxiliar o el de lectura " << NombreArchivo <<" no se pudo abrir o no existe!."<<endl;
			exit(1);
		}
		else {
			system("cls");
			cout << "\n\tIngrese el carné del estudiante al que desea modificar datos: "; cin >> carnetB;
		
			while (ArchivoLectura.read(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos))) {
				if ( strcmp(datos_alumno.matricula,carnetB) == 0) {
					strcpy(nomape,datos_alumno.nombre);
					strcat(nomape," ");
					strcat(nomape,datos_alumno.apellido);
	
					cout << "\n\tLOS DATOS ACTUALES DEL ESTUDIANTE ENCONTRADO SON:" <<endl;
					cout << "\n\tCarné		Nombre y Apellido	Nota" <<endl;
					cout << "\t===============================================" <<endl;
					cout << "\t" <<datos_alumno.matricula <<"\t" <<nomape << "\t\t" <<datos_alumno.nota <<endl;
					cout << "\t===============================================" <<endl;
					
					cout << "\n\tIngrese los nuevos datos para el estudiante: "<<endl;
					cout << "\t-----------------------------------------------" <<endl;
					fflush(stdin);
					cout <<"\tNuevo nombre: "; cin.getline(datos_alumno.nombre,20,'\n');
					cout <<"\tNuevo apellido: "; cin.getline(datos_alumno.apellido,20,'\n');
					cout <<"\tNueva nota: "; fflush(stdin); cin >> datos_alumno.nota;
					cout << "\t-----------------------------------------------" <<endl;
					
					ArchivoAux.write(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos));
					bandera = true;
				}
				else
					ArchivoAux.write(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos));
			}

			ArchivoLectura.close();
			ArchivoAux.close();

			if (bandera == false) {
				remove("ArchAux.dat");
				cout << "\n\n\tRegistro no encontrado." <<endl<<endl;
			}
			else {
				remove("alumnosumg.dat");
				rename("ArchAux.dat","alumnosumg.dat");
				cout << "\n\n\tRegistro actualizado exitosamente!." <<endl<<endl;
			}
		}
		cout << "\n\t¿Desea modificar los datos de otro alumno (s = si, n = no)?. "; fflush(stdin); cin >> opcion;
	} while ((opcion == 's') || (opcion == 'S'));
}

void EliminarRegistroArchivo() {
	string NombreArchivo;
	bool bandera=false, bandera2=false;
	char carnetB[15], nomape[40], opcion;
	reg_alumno datos_alumno;
	char salir2;
	
	do{
		system("cls");
		
		ofstream ArchivoAux ("ArchAux.dat", ios::out | ios::binary);
		ifstream ArchivoLectura ("alumnosumg.dat", ios::in | ios::binary);
		
		if (ArchivoLectura.fail() || ArchivoAux.fail()) { //Validación de apertura de los 2 archivos
			cerr<<"\nError: ¡El archivo auxiliar o el de lectura " << NombreArchivo <<" no se pudo abrir o no existe!."<<endl;
			exit(1);
		}
		else {
			cout << "\n\tIngrese el carné del estudiante al que desea eliminar: "; cin >> carnetB;
	
			while (ArchivoLectura.read(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos))) {
				if ( strcmp(datos_alumno.matricula,carnetB) == 0) {
					strcpy(nomape,datos_alumno.nombre);
					strcat(nomape," ");
					strcat(nomape,datos_alumno.apellido);
				
					cout << "\n\tLOS DATOS DEL ESTUDIANTE ENCONTRADO SON:" <<endl;
					cout << "\n\tCarné		Nombre y Apellido	Nota" <<endl;
					cout << "\t===============================================" <<endl;
					cout << "\t" <<datos_alumno.matricula <<"\t" <<nomape << "\t\t" <<datos_alumno.nota <<endl;
					cout << "\t===============================================" <<endl;
				
					cout << "\n\t¿Realmente desea eliminar los datos del estudiante? (s=si; n=no). ";
					cin >> opcion;
				
					if ((opcion=='s') || (opcion=='S')) {
						bandera2 = true;	//Bandera para indicar que sí se eliminó el registro encontrado
					}
					else {
						ArchivoAux.write(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos));
					}
					bandera = true;	//Bandera para indicar que sí se encontró el registro buscado
				}
				else {
					ArchivoAux.write(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos));
				}
			}
			
			ArchivoLectura.close();
			ArchivoAux.close();
		
			if (bandera == false) {	//No se encontró el registro buscado
				remove("ArchAux.dat");
				cout << "\n\n\tRegistro no encontrado!." <<endl<<endl;			
			}
			else {
				if (bandera2 == false) {
					remove("ArchAux.dat");
					cout << "\n\n\tRegistro encontrado, pero no eliminado!." <<endl<<endl;			
				}
				else {
					remove("alumnosumg.dat");
					rename("ArchAux.dat","alumnosumg.dat");
					cout << "\n\n\t¡Registro eliminado exitosamente!." <<endl<<endl;				
				}
			}
		}
		cout<<"¿Desea eliminar otros regisstros? (s= sí o n= no): ";
		cin>> salir2;
	}while(salir2 == 's' || salir2 == 'S');
}

void FiltrarDeArchivo() {
	string NombreArchivo;
	bool bandera, bandera1;
	char nomape[40], opcion;
	int suma, cuenta, opcion_filtrado = 0;
	reg_alumno datos_alumno;
	
	ifstream ArchivoLectura ("alumnosumg.dat", ios::in | ios::binary);

	if (ArchivoLectura.fail()) { // Validacion de fallo en la apertura del archivo
		cerr<<"\nError: ¡No se pudo abrir el archivo de lectura!."<<endl;
		exit(1);
	}
	else {
		do {
			bandera = false, bandera1 = false;
			suma = 0, cuenta = 0;
			system("cls");
			
			cout << "\n\tIngrese una opción para filtrar el reporte: " << endl;
			cout << "\t1. Alumnos que aprobaron el curso (nota >= 61)." << endl;
			cout << "\t2. Alumnos que reprobaron el curso (nota < 61)." << endl;
			cout << "\t3. Alumnos sin derecho a examen final (nota < 20)." << endl;
			cout << "\t4. Alumnos que estuvieron a punto de reprobar el curso (nota entre 57 y 60 puntos)." << endl;
			cout << "\t5. Todos los alumnos." << endl;
			cout << "\t6. Salir." << endl <<endl;
			cout << "\tOpcion: ";
			cin >> opcion_filtrado;
			
			system("cls");
			cout << "\n\t          DATOS DE LOS ALUMNOS     " <<endl;
			cout << "\t====================================================" << endl;
			cout << "\tNo."<<"\t"<<"CARNÉ"<<"\t\t"<<"NOMBRE Y APELLIDO"<<"\t"<<"NOTA" << endl;
			cout << "\t====================================================" << endl;

			while (ArchivoLectura.read(reinterpret_cast<char *>(&datos_alumno), sizeof(Registro_Alumnos))) {
				switch(opcion_filtrado) {
				   	case 1: 
						if (datos_alumno.nota >= 61) {
							cout << "\n\t" <<++cuenta;
							strcpy(nomape,datos_alumno.nombre);
							strcat(nomape," ");
							strcat(nomape,datos_alumno.apellido);
							cout << "\t" << datos_alumno.matricula << "\t" << nomape << "\t\t" << datos_alumno.nota;
							suma += datos_alumno.nota;
							bandera = true;
						}
						
						break;
				   	case 2:
						if (datos_alumno.nota < 61) {
							cout << "\n\t" <<++cuenta;
							strcpy(nomape,datos_alumno.nombre);
							strcat(nomape," ");
							strcat(nomape,datos_alumno.apellido);
							cout << "\t" << datos_alumno.matricula << "\t" << nomape << "\t\t" << datos_alumno.nota;
							suma += datos_alumno.nota;
							bandera = true;
						}
				   		break;
				   	case 3:
						if (datos_alumno.nota < 20) {
							cout << "\n\t" <<++cuenta;
							strcpy(nomape,datos_alumno.nombre);
							strcat(nomape," ");
							strcat(nomape,datos_alumno.apellido);
							cout << "\t" << datos_alumno.matricula << "\t" << nomape << "\t\t" << datos_alumno.nota;
							suma += datos_alumno.nota;
							bandera = true;
						}
				   		break;				   		
				   	case 4:
						if ((datos_alumno.nota >= 57) && (datos_alumno.nota <= 60) )  {
							cout << "\n\t" <<++cuenta;
							strcpy(nomape,datos_alumno.nombre);
							strcat(nomape," ");
							strcat(nomape,datos_alumno.apellido);
							cout << "\t" << datos_alumno.matricula << "\t" << nomape << "\t\t" << datos_alumno.nota;
							suma += datos_alumno.nota;
							bandera = true;
						}
				   		break;				   		
				   	case 5:
						if ((datos_alumno.nota >= 0) && (datos_alumno.nota <= 100) )  {
							cout << "\n\t" <<++cuenta;
							strcpy(nomape,datos_alumno.nombre);
							strcat(nomape," ");
							strcat(nomape,datos_alumno.apellido);
							cout << "\t" << datos_alumno.matricula << "\t" << nomape << "\t\t" << datos_alumno.nota;
							suma += datos_alumno.nota;
							bandera = true;
						}
				   		break;				   		
				   	case 6: exit(1);
				   		
				   	default: bandera1 = true;
				}
			};
			cout << "\n\t====================================================" << endl;
			
			if (bandera == true) {
				cout.precision(2);
				cout<<"\n\tNOTA: El promedio de notas de los "<< cuenta <<" estudiantes es de : "<<fixed<<float(suma)/cuenta<<" Puntos."<<endl<<endl;			
			}
			else {
				if (bandera1 == true)
					cout<<"\n\n\tOpción elegida fuera del rango (1 - 5) - ¡Elección inválida!.";
				else
					cout << "\n\n\tNo se encontró ninguna coincidencia con lo buscado." <<endl;
			}
						
			cout << "\n\t¿Desea filtrar y/o generar otro reporte  (s = si, n = no)?. ";	fflush(stdin); cin >> opcion;
			if ((opcion == 's') || (opcion == 'S')) {
				ArchivoLectura.clear();							//con clear() se limpian los flags de estado para que seekg pueda funcionar
				ArchivoLectura.seekg(0, ArchivoLectura.beg);	//y pueda regresar a la posici[on inicial del archivo y hacer otra búsqueda
			}
		} while ((opcion == 's') || (opcion == 'S'));
		ArchivoLectura.close();
	}
}
