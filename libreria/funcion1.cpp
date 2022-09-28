#include "funcion1.h"


float calcular_promedio(int puntero[100], int N)
{
    float acumulador = 0;
    float promedio;
    int* auxiliar;
    auxiliar = new int[N]; // asigno memoria para un vector de N elementos y guardo la direccion base en puntero
    for (int i = 0; i < N; i++)
    {                                       //Recorremos el array y acumulamos los datos en memoria dinamica
        *auxiliar = puntero[i];
        acumulador = acumulador + *auxiliar;
    }
    if (N != 0)                           // Controlamos que el acumulador sea mayor que 0 para que no divida por 0
    {
        promedio = acumulador / N;
        return promedio;
    }
    else {                               //Si el denominador es 0 retornamos -1 para avisar que hay un error
        return -1;
    }
}


int numerosPares(int puntero[100], int N)
{
    int contador = 0;
    int* auxiliar;
    auxiliar = new int[N];
    for (int i = 0; i < N; i++)
    {
        *auxiliar = puntero[i];                         //Recorremos el array y en memoria dinamica revisamos los restos para ver si 
                                                       //es multiplo de 2
        if (*auxiliar % 2 == 0) {
            contador++;
        }
    }

    if (contador != 0)return contador;               //Si hay multiplos de 2 los devolvemos y para decir q no los hubo retornamos -1

    else return -1;

}

