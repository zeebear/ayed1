/*
----------------------------------------------------
Parcialito 2 AyED1 2021
----------------------------------------------------
*/

/* Ejercicio 1 -- asignación múltiple */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

struct asoc_t
{
    int clave;
    int valor;
};

void pedirArreglo(struct asoc_t a[], int n_max)
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

bool hay_asoc(int key, struct asoc_t a[], int tam)
{
    bool asoc = false;

    return asoc;
}

int main(void)
{
    struct asoc_t a[] = pedirArreglo;

    return 0;
}