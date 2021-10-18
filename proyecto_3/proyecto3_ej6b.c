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

int minimoDeTres(int x, int y, int z)
{
    int m = 0;

    if (x < y)
    {
        m = x;
    }
    else
    {
        m = y;
    }

    if (m < z)
    {
    }
    else
    {
        m = z;
    }

    return m;
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

    int m = minimoDeTres(x, y, z);

    imprimeEntero(m);

    return 0;
}

/*
La ventaja de la nueva versión es que se puede reutilizar varias veces
la función pedirEntero();

Se puede utilizar la función pedirEntero(); en cualquier ejercicio que
solicite al usuario el ingreso de los valores -- Ejercicios 1, 3a, 4a,
5a, y 5b. Se puede utilizar la función imprimeEntero(int x); en cualquier
ejercicio cuyo fin es la devolución de un entero -- Ejercicios 4a.
*/