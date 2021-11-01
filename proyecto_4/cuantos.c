/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 9 -- cuantos.c */

#include <stdio.h>

struct comp_t
{
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem)
{
    struct comp_t totales;
    int men = 0, ig = 0, may = 0, i = 0;

    while (i < tam)
    {
        if (a[i] < elem)
        {
            men++;
        }
        else if (a[i] > elem)
        {
            may++;
        }
        else
        {
            ig++;
        }

        i++;
    }

    totales.menores = men;
    totales.iguales = ig;
    totales.mayores = may;

    return totales;
}

int main(void)
{
    int tam;
    printf("Ingrese la cantidad de números en el arreglo:\n");
    scanf("%d", &tam);
    int a[tam];

    int i = 0;
    int n, elem;

    while (i < tam)
    {
        printf("Ingrese el próximo número entero del arreglo:\n");
        scanf("%d", &n);
        a[i] = n;
        i++;
    }

    printf("Ingrese el número con que quiere comparar:\n");
    scanf("%d", &elem);

    struct comp_t comp = cuantos(a, tam, elem);
    int men = comp.menores;
    int ig = comp.iguales;
    int may = comp.mayores;

    printf("En el arreglo hay %d número(s) menor que %d, %d número(s) igual a %d, y %d número(s) mayor a %d\n", men, elem, ig, elem, may, elem);

    return 0;
}