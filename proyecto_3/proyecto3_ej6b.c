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
5a, y 5b.

------

Ejercicio 4a reescrito:

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int x = pedirEntero();
    int y = pedirEntero();
    int a = pedirEntero();
    int b = pedirEntero();
    
    if (x >= y)
    {
        x = 0;
    }
    else
    {
        x = 2;
    }

    if (a >= b)
    {
        a = 0;
    }
    else
    {
        a = 2;
    }

    printf("El resultado de Programa 1.e es x |-> %d, y |-> %d\n", x, y);
    printf("El resultado de Programa 1.f es a |-> %d, b |-> %d\n", a, b);
    return 0;
}

*/