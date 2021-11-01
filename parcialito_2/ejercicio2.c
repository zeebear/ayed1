/*
----------------------------------------------------
Parcialito 2 AyED1 2021
----------------------------------------------------
*/

/* Ejercicio 2 -- ordenar tres números */

#include <stdio.h>

struct orden_t
{
    int primero;
    int segundo;
    int tercero;
};

struct orden_t orden(int x, int y, int z)
{
    struct orden_t mi_ord;

    if (x <= y && x <= z)
    {
        mi_ord.primero = x;
    }
    else if (y <= x && y <= z)
    {
        mi_ord.primero = y;
    }
    else
    {
        mi_ord.primero = z;
    }

    if (x >= y && x >= z)
    {
        mi_ord.tercero = x;
    }
    else if (y >= x && y >= z)
    {
        mi_ord.tercero = y;
    }
    else
    {
        mi_ord.tercero = z;
    }

    if (x == mi_ord.primero)
    {
        if (y == mi_ord.tercero)
        {
            mi_ord.segundo = z;
        }
        else
        {
            mi_ord.segundo = y;
        }
    }

    if (x == mi_ord.primero)
    {
        if (y == mi_ord.tercero)
        {
            mi_ord.segundo = z;
        }
        else
        {
            mi_ord.segundo = y;
        }
    }
    else if (y == mi_ord.primero)
    {
        if (x == mi_ord.tercero)
        {
            mi_ord.segundo = z;
        }
        else
        {
            mi_ord.segundo = x;
        }
    }
    else
    {
        if (y == mi_ord.tercero)
        {
            mi_ord.segundo = x;
        }
        else
        {
            mi_ord.segundo = y;
        }
    }

    return mi_ord;
}

int main(void)
{
    int x, y, z;
    printf("Ingrese el primer valor numérico entero:\n");
    scanf("%d", &x);
    printf("Ingrese el segundo valor numérico entero:\n");
    scanf("%d", &y);
    printf("Ingrese el tercer valor numérico entero:\n");
    scanf("%d", &z);

    struct orden_t ordenados = orden(x, y, z);

    int a, b, c;
    a = ordenados.primero;
    b = ordenados.segundo;
    c = ordenados.tercero;

    printf("Los números en orden de menor a mayor son: %d, %d, %d\n", a, b, c);

    return 0;
}