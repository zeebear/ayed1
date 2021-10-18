/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 6c -- saludos.c */

#include <stdio.h>

void imprimeHola(void)
{
    char x[5] = "hola";
    printf("%s\n", x);
}

void imprimeChau(void)
{
    char x[5] = "chau";
    printf("%s\n", x);
}

int main(void)

{
    imprimeHola();
    imprimeHola();
    imprimeChau();
    imprimeChau();

    return 0;
}
