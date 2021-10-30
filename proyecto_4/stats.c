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
    /* pide al usuario los datos del arreglo */
    /* asumiendo un tamaño constante de 4 */
    int tam = 4;
    float a[4], n;

    int i = 0;

    while (i < tam)
    {
        printf("Ingrese el próximo número del arreglo:\n");
        scanf("%f", &n);
        a[i] = n;
        i++;
    }

    struct datos_t resultados = stats(a, tam);
    float max = resultados.maximo;
    float min = resultados.minimo;
    float prom = resultados.promedio;

    printf("El máximo del arreglo es %f, el mínimo del arreglo es %f, y el promedio del arreglo es %f\n", max, min, prom);

    return 0;
}