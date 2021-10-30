/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 11 -- primo.c */

#include <stdio.h>
#include <assert.h>

int nesimo_primo(int N)
{
}

int main(void)
{

    int n, p;
    printf("Ingrese un valor numérico entero N:\n");
    scanf("%d", &n);

    /*
    11(a) -- para imprimir un mensaje de error si el número ingresado es negativo:
    */
    /* assert(n > 0); */

    /*
    11(b) para peir que, al ingresar un valor negativo, solicite un nuevo
    valor hasta que se ingrese un n no negativo
    */
    while (n < 0)
    {
        printf("Error: El valor ingresado no puede ser negativo. Ingrese un valor numérico entero positivo N:\n");
    }

    int p = nesimo_primo(n);
    printf("El %d-ésimo primo es %d\n", n, p);

    return 0;
}