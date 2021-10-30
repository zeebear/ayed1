/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 10 -- stats.c */

#include <stdio.h>

struct datos_t
{
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(float a[], int tam)
{
    struct datos_t resultados;
    float max = a[0];
    float min = a[0];
    float prom;
    int i = 0;

    while (i < tam)
    {
        prom = prom + a[i];

        if (max <= a[i])
        {
            max = a[i];
        }

        if (min >= a[i])
        {
            min = a[i];
        }

        i++;
    }

    resultados.maximo = max;
    resultados.minimo = min;
    resultados.promedio = prom / tam;

    return resultados;
}

int main(void)
{

    return 0;
}