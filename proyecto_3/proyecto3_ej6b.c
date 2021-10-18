/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 6b */

#include <stdio.h>

int pedirEntero(void)
{
    int x;

    printf("Ingrese un valor numérico entero\n");
    scanf("%d", &x);

    return x;
}

void imprimeEntero(int x)
{
    printf("%d\n", x);
}

int main(void)

{
    int x = pedirEntero();
    int y = pedirEntero();
    int z = pedirEntero();
    int m = 0;

    return 0;
}
