#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//4. Implementar un programa que rellene un array con los números primos
//	comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

bool esprimo (int v) {
	for (int i = 2; i <= v/2 + 1; i++)
		if (v%i == 0)
			return false;
	
	return true;
}

int main(int argc, char *argv[]) {
	int prim[25];
	int tam = (sizeof(prim)/sizeof(prim[0]));
	int c = tam-1;
	prim[c] = 2;
	
	for (int i = 3; i <= 100; i++)
		if (esprimo(i) == true) {
			c--;
			prim[c] = i;
		}
	
	cout << "Los numeros primos entre 1 y 100 (en orden descendente) son...\n";
	
	for (int i = 0; i < tam; i++)
		cout << prim[i] << " ";
	return 0;
}

