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
