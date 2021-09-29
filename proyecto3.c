/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

// Ejercicio 1

#include <stdio.h>
int main(void)

{
    int x, y, z, i;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);

    i = y < x * z;

    printf("El resultado es %d\n", i);
    return 0;
}