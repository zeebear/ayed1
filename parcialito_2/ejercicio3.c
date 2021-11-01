/*
----------------------------------------------------
Parcialito 2 AyED1 2021
----------------------------------------------------
*/

/* Ejercicio 1 -- asignación múltiple */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void pedirArreglo(int a[], int n_max)
{
    int i = 0;
    int n;

    while (i < n_max)
    {
        printf("Ingrese el próximo número entero del arreglo:\n");
        scanf("%d", &n);
        a[i] = n;
        i++;
    }
}

int mult_pares(int array[], int tam)
{
    int producto = 1;
    int i = 0;
    bool pares = false;

    while (i < tam)
    {
        if (array[i] % 2 == 0)
        {
            pares = true;
            producto = producto * array[i];
        }
        i++;
    }

    if (pares == false)
    {
        producto = 0;
    }

    return producto;
}

int main(void)
{
    /* armar el arreglo */
    int N;
    printf("Ingrese la cantidad de números en el arreglo:\n");
    scanf("%d", &N);

    int a[N];
    pedirArreglo(a, N);

    /* imprimir el resultado*/
    int prod_pares = mult_pares(a, N);
    printf("El producto de los números pares en el arreglo es %d\n", prod_pares);

    return 0;
}