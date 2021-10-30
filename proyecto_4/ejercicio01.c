/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 1 -- ejercicio01.c */

#include <stdio.h>
#include <assert.h>

void holaHasta(int n)
{
    int i = 0;
    while (i < n)
    {
        printf("hola\n");
        i++;
    }
}

int main(void)
{
    int x;
    printf("Ingrese un valor numérico entero\n");
    scanf("%d", &x);
    assert(x > 0);

    holaHasta(x);
    return 0;
}