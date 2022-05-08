#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//7. Escribe un programa, que trabajando mediante funciones, presente un menú al
//	usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las
//	filas para arriba o para abajo.

void imprimirmatriz (char M[][4], int f, int c) {
	cout << "MATRIZ" << endl;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

void intercolumna (char a1[], char a2[], int c) {
	for (int i = 0; i < c; i++)
		a1[i] = a2[i];
}

void interfila (char a1[], char a2[], int c) {
	for (int i = 0; i < c; i++)
		a1[i] = a2[i];
}

void moverfila (char M[][4], int f, int c) {
	int n = 0, d = 0;
	while (n < 1 || n > f) {
		cout << "Fila a mover: ";
		cin >> n;
		
		if (n < 1 && n > f)
			cout << "ERROR! Ingrese una fila valida\n";
	}
	
	int a = 0;
	do {
		cout << "1. Arriba\n";
		cout << "2. Abajo\n";
		cout << "Direccion: ";
		cin >> d;
		if (d == 1 && n-1 == 0)
			cout << "ERROR! La fila seleccionada no puede ir más arriba\n" << endl;
		else if (d == 2 && n == f)
			cout << "ERROR! La fila seleccionada no puede ir más abajo\n";
		else if (d != 1 && d != 2)
			cout << "ERROR! Solo ingrese 1 o 2\n" << endl;
		else
			a=1;
	} while (a == 0);
	
	char aux[4];
	switch (d) {
		case (1): {
			interfila(aux, M[n-2], c);
			interfila(M[n-2], M[n-1], c);
			interfila(M[n-1], aux, c);
		}
		case (2): {
			interfila(aux, M[n], c);
			interfila(M[n], M[n-1], c);
			interfila(M[n-1], aux, c);
		}
	}
	
	imprimirmatriz(M, f, c);
}

void movercolumna (char M[][4], int f, int c) {
	
}

int main(int argc, char *argv[]) {
	char matriz[4][4]{{'A','M','O','R'},{'R','O','S','A'},{'L','U','N','A'},{'P','E','L','O'}};
	int filas = (sizeof(matriz)/sizeof(matriz[0]));
	int columnas = (sizeof(matriz[0])/sizeof(matriz[0][0]));
	int a = 0;
	imprimirmatriz(matriz, filas, columnas);
	
	do {
		cout << "1. Mover fila\n";
		cout << "2. Mover columna\n";
		cout << "Operacion: ";
		cin >> a;
		if (a != 1 && a != 2)
			cout << "ERROR! Solo ingrese 1 o 2\n" << endl;;
	} while (a != 1 && a != 2);
	
	switch (a) {
		case (1):
			moverfila(matriz, filas, columnas);
		case (2):
			movercolumna(matriz, filas, columnas);
	}
	return 0;
}

