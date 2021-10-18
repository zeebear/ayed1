/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 6a -- entradas.c */

#include <stdio.h>

int pedirEntero(void)
{
    int x;

    printf("Ingrese un valor numérico para x\n");
    scanf("%d", &x);

    return x;
}

void imprimeEntero(int x)
{
    printf("%d\n", x);
}

int main(void)

{
    imprimeEntero(pedirEntero());

    return 0;
}
