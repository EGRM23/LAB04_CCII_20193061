#include <iostream>
#include <string.h>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
//	nombre, apellido, edad y DNI y luego lo muestre por pantalla.

struct persona {
	string nombre;
	string apellido;
	string DNI;
	int edad;
};

void ingresarpers (persona lista[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "DATOS PERSONA " << i+1 << endl;
		
		cout << "	Nombre: ";
		cin >> lista[i].nombre;
		
		cout << "	Apellido: ";
		cin >> lista[i].apellido;
		
		cout << "	Edad: ";
		cin >> lista[i].edad;
		
		cout << "	DNI: ";
		cin >> lista[i].DNI;
		
		cout << endl;
	}
}

void imprimir (persona lista[], int tam) {
	cout << "Los datos guardados son...\n";
	for (int i = 0; i < tam; i++) {
		cout << "DATOS PERSONA " << i+1 << endl;
		
		cout << "Nombre: " << lista[i].nombre << endl;
		cout << "Apellido: " << lista[i].apellido << endl;
		cout << "Edad: " << lista[i].edad << endl;
		cout << "DNI: " << lista[i].DNI << endl;
		cout << endl;
	}
}

int main(int argc, char *argv[]) {
	int tam = 3;
	
	persona lista[3];
	
	ingresarpers(lista, tam);
	imprimir(lista, tam);
	
	return 0;
}

