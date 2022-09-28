#include "funcion1.h"


float calcular_promedio(float *puntero, int N)
{
    float acumulador = 0;
    float promedio;
    float* auxiliar;
    auxiliar = new float[N]; // asigno memoria para un vector de N elementos y guardo la direccion base en puntero
    for (int i = 0; i < N; i++)
    {
        *auxiliar = *puntero[i];
        acumulador = acumulador + *auxiliar;
    }
    if (N != 0)
    {
        promedio = acumulador / N;
        return promedio;
    }
    else {
        return -1;
    }
}


int numerosPares(float* puntero[], int N)
{
    int contador = 0;
    float* auxiliar;
    auxiliar = new int[N];
    for (int i = 0; i < N; i++)
    {
        *auxiliar = *puntero[i];
        if (*auxiliar % 2 == 0) {
            contador++;
            return contador;
        }
        else {
            return -1;
        }
    }








}

