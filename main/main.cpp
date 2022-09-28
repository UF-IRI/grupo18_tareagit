#include <cstdlib>
#include <iostream>
#include "funcion1.h"

int main(){

	int opcion = 0;
	float respuesta;
	int N;
	float *puntero;
	float vector[100];
	puntero = new float;
	int i = 0;

	do
	{

		cout << "Seleccione una funcion:\n1.Promedio\n2.Contador de numeros pares\n";
		cin >> opcion;
	
	} while (opcion != 1 && opcion != 2);

	if (opcion == 1) {

		do
		{

			cout << "Ingrese una cantidad de numeros a ingresar menor que 100\n";
			cin >> N;

		} while (opcion <100);

		for (i = 0; i < N; i++) {

			cin >> vector[i];

		}
		*puntero = vector[0];

		respuesta = calcular_promedio(*puntero, N);
		
		if (respuesta == 1) {

			cout << "Los valores ingresados fueron incorrectos.\n";
		}
	}

	else if (opcion == 1) {

		do
		{

			cout << "Ingrese una cantidad de numeros a ingresar menor que 100\n";
			cin >> N;

		} while (opcion < 100);

		for (i = 0; i < N; i++) {

			cin >> vector[i];

		}
		*puntero = vector[0];

		respuesta = numerosPares(*puntero, N);

		if (respuesta == 1) {

			cout << "Los valores ingresados fueron incorrectos.\n";
		}
	}


	system("PAUSE");
	
	return 0;
}
