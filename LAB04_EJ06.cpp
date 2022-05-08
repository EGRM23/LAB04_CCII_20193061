#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//6. Escribe un programa que pida nueve números enteros y los almacene en una
//	matriz 3x3. Calcula la suma de los números de cada fila y mostrar por
//	pantalla el número de fila con mayor suma.

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

void mayorfila (int M[][3], int f, int c) {
	int max, s = 0, fm = 0;
	
	for (int i = 0; i < f; i++) {
		s=0;
		
		for (int j = 0; j < c; j++)
			s += M[i][j];
		
		if (i == 0) {
			max = s;
		} else if (s > max) {
			max = s;
			fm = i+1;
		}
	}
	
	cout << "La fila con mayor suma es la fila " << fm << endl;
	cout << "Suma de la mayor fila: " << max;
}
int main(int argc, char *argv[]) {
	int matriz[3][3];
	int filas = (sizeof(matriz)/sizeof(matriz[0]));
	int columnas = (sizeof(matriz[0])/sizeof(matriz[0][0]));
	
	ingresardatos(matriz, filas, columnas);
	imprimirmatriz(matriz, filas, columnas);
	mayorfila(matriz, filas, columnas);
	
	return 0;
}

