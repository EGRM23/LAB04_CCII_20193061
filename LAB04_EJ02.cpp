#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//20193061

//2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
//	pregunte al usuario que ingrese un número a buscar, implementar una función que
//	busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
//	contrario, retornar falso.

bool buscar (int lista[], int tam, int n) {
	for (int i = 0; i < tam; i++)
		if (n == lista[i])
			return true;
	
	return false;
}

void imprimir (int lista[], int tam) {
	cout << "v = ";
	for (int i = 0; i < tam; i++)
		cout << lista[i] << " ";
	cout << endl;
}

int main(int argc, char *argv[]) {
	
	int tam = 8, n;
	int lista[] = {8,3,12,15,9,10,1,7};
	
	imprimir(lista, tam);
	
	cout << "Número a buscar: ";
	cin >> n;
	
	cout << endl;
	if (buscar(lista, tam, n) == true)
		cout << "El valor SI se encuentra en la lista";
	else if (buscar(lista, tam, n) == false)
		cout << "El valor NO se encuentra en la lista";
	
	return 0;
}

