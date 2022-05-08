#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario.
//	Al final, debe mostrar la suma de todos los números que estén en una
//	fila par.

void ingresardatos (int M[][3], int f, int c) {
	for (int i = 0; i < f; i++)
		for (int j = 0; j < c; j++) {
			cout << "M[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> M[i][j];
		}
}

void imprimirmatriz (int M[][3], int f, int c) {
	cout << endl << "MATRIZ" << endl;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++)
			cout << M[i][j] << " ";
		cout << endl;
	}
}

int sumapar2 (int M[][3], int c) {
	int s = 0;
	for (int i = 0; i < c; i++)
		s += M[1][i];
	
	return s;
}
int main(int argc, char *argv[]) {
	int matriz[5][3];
	int filas = (sizeof(matriz)/sizeof(matriz[0]));
	int columnas = (sizeof(matriz[0])/sizeof(matriz[0][0]));
	
	ingresardatos(matriz, filas, columnas);
	
	imprimirmatriz(matriz, filas, columnas);
	
	cout << "\nSuma de la segunda fila: " << sumapar2(matriz, columnas);
	return 0;
}

