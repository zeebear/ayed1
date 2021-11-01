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
        printf("Ingrese el próximo clave del elemento del arreglo:\n");
        scanf("%d", &n);
        a[i].clave = n;
        printf("Ingrese el próximo valor del elemento del arreglo:\n");
        scanf("%d", &n);
        a[i].valor = n;
        i++;
    }
}

bool hay_asoc(int key, struct asoc_t a[], int tam)
{
    bool asoc = false;

    int i = 0;
    while (i < tam)
    {
        if (a[i].clave == key)
        {
            asoc = true;
        }
        i++;
    }

    return asoc;
}

int main(void)
{
    int n_max;
    printf("Ingrese la cantidad de elementos en el arreglo:\n");
    scanf("%d", &n_max);

    struct asoc_t a[n_max];
    pedirArreglo(a, n_max);

    int clave;
    printf("Ingrese un clave para buscar en el arreglo de asociaciones:\n");
    scanf("%d", &clave);

    bool resultado = hay_asoc(clave, a, n_max);
    char *resultado_s;
    if (resultado == true)
    {
        resultado_s = "sí está";
    }
    else
    {
        resultado_s = "no está";
    }
    printf("El clave %d %s en el arreglo\n", clave, resultado_s);

    return 0;
}