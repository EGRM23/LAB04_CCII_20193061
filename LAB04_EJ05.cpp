#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//5. Implemente un programa que gestione los datos de stock de una tienda de
//	abarrotes, la información a recoger será: nombre del producto, precio,
//	cantidad en stock. La tienda dispone de 10 productos distintos. El programa
//	debe ser capaz de:
//	a. Dar de alta un producto nuevo.
//	b. Buscar un producto por su nombre.
//	c. Modificar el stock y precio de un producto dado.

struct producto {
	string nombre;
	float precio;
	int stock;
};

void ingresarproducto (producto &d, string n, float p, int s) {
	d.nombre = n;
	d.precio = p;
	d.stock = s;
}

void ingresomanual (producto d[], int tam) {
	cout << endl;
	for (int i = 0; i < tam; i++) {
		cout << "PRODUCTO " << i+1 << endl;
		cout << "Nombre: ";
		cin >> d[i].nombre;;
		cout << "Precio: ";
		cin >> d[i].precio;
		cout << "Stock: ";
		cin >> d[i].stock;
		cout << endl;
	}
}

void mostrarlistado (producto d[], int tam) {
	cout << "\nListado de productos actualizado\n";
	for (int i = 0; i < tam; i++) {
		cout << "PRODUCTO " << i+1 << endl;
		cout << "	Nombre: " << d[i].nombre << endl;
		cout << "	Precio: " << d[i].precio << endl;
		cout << "	Stock: " << d[i].stock << endl;
	}
	cout << endl;
}

void Alta (producto d[], int &tam) {
	mostrarlistado(d, tam);
	int p;
	
	cout << "Numero del producto al que se dará de alta: ";
	cin >> p;
	
	for (int i = p-1; i < tam-1; i++)
		d[i] = d[i+1];
	tam--;
	
	mostrarlistado(d, tam);
}

void Buscarnombre (producto d[], int tam) {
	string n;
	int c = 0, i = 0;
	
	cout << "Nombre del producto a buscar (inicial mayuscula): ";
	cin >> n;
	
	do {
		if (n == d[i].nombre)
			c = 1;
		else
			i++;
	} while (c == 0 && i < tam);
	
	if (c == 1) {
		cout << "PRODUCTO " << i+1 << endl;
		cout << "	Nombre: " << d[i].nombre << endl;
		cout << "	Precio: " << d[i].precio << endl;
		cout << "	Stock: " << d[i].stock << endl;
	} else
		cout << "El producto buscado no existe\n";
}

void Modificar (producto d[], int tam) {
	mostrarlistado(d, tam);
	int n;
	
	cout << "Numero del producto al que modificará: ";
	cin >> n;
	
	cout << "Nuevo Stock: ";
	cin >> d[n-1].stock;
	
	cout << "Nuevo Precio: ";
	cin >> d[n-1].precio;
	
	cout << "PRODUCTO " << n << endl;
	cout << "	Nombre: " << d[n-1].nombre << endl;
	cout << "	Precio: " << d[n-1].precio << endl;
	cout << "	Stock: " << d[n-1].stock << endl;
}

int main(int argc, char *argv[]) {
	
	producto disp[10];
	int tam = (sizeof(disp)/sizeof(disp[0]));
	int a = 0;
	
	do {
		cout << "Desea usar datos de ejemplo? ( SI = 1 , NO = 0 ): ";
		cin >> a;
		if (a != 1 && a != 0)
			cout << "ERROR! Solo ingrese 1 o 0\n" << endl;;
	} while (a != 1 && a != 0);
	
	if (a == 1) {
		ingresarproducto(disp[0], "Oreo", 2.70, 9);
		ingresarproducto(disp[1], "Morochas", 2.30, 11);
		ingresarproducto(disp[2], "Charada", 1.20, 2);
		ingresarproducto(disp[3], "Magneto", 5.40, 10);
		ingresarproducto(disp[4], "Tentacion", 3.00, 5);
		ingresarproducto(disp[5], "Casino", 2.00, 3);
		ingresarproducto(disp[6], "Rellenita", 1.00, 1);
		ingresarproducto(disp[7], "Margarita", 7.00, 9);
		ingresarproducto(disp[8], "Chocman", 1.80, 3);
		ingresarproducto(disp[9], "Sublime", 4.10, 5);
	} else
		ingresomanual(disp, tam);
	
	mostrarlistado(disp, tam);
	a = 0;
	
	do {
		cout << "OPERACIONES (Ingrese el número de la que desea realizar)\n";
		cout << "1. Dar de alta un producto nuevo.\n";
		cout << "2. Buscar un producto por su nombre.\n";
		cout << "3. Modificar el stock y precio de un producto dado.\n";
		cout << "4. Salir.\n";
		
		cout << "Operacion: ";
		cin >> a;
		if (a != 1 && a != 2 && a != 3 && a != 4)
			cout << "ERROR! Ingrese un numero de operacion valido\n" << endl;;
	} while(a != 1 && a != 2 && a != 3 && a != 4);
	
	switch (a) {
		case (1):
			Alta(disp, tam);
		case (2):
			Buscarnombre(disp, tam);
		case (3):
			Modificar(disp, tam);
		case (4):
			cout << "Gracias por confiar en nosotros!";
	}
	
	return 0;
}

