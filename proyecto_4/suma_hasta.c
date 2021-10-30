/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 4 -- suma_hasta.c */

#include <stdio.h>
#include <assert.h>

int suma_hasta(int N)
{
    int n, i, j;

    i = 0;
    j = N;
    n = N;

    while (i < j)
    {
        n = n + i;
        i++;
    }
    return n;
}

int suma_hasta_gauss(int N)
{
    int n = N;
    n = n * (n + 1) / 2;
    return n;
}

int main(void)
{
    int n, m, p;
    printf("Ingrese un valor numérico entero N:\n");
    scanf("%d", &n);
    assert(n > 0);

    m = suma_hasta(n);
    printf("Usando un ciclo para calcularlo, la suma de todos los números hasta N = %d es %d\n", n, m);

    p = suma_hasta_gauss(n);
    printf("Usando la fórmula de Gauss, la suma de todos los números hasta N = %d es %d\n", n, p);

    return 0;
}