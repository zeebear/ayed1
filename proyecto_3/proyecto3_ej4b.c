/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 4b */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int main(void)

{
    int x, y, z;
    printf("Ingrese un valor para x (en el ejercicio original, es 5)\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y (en el ejercicio original, es 4)\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z (en el ejercicio original, es 8)\n");
    scanf("%d", &z);
    int m = 0;

    /* Parte 1 */
    if (x < y)
    {
        m = x;
    }
    else
    {
        m = y;
    }

    printf("El resultado de Parte 1 es x |-> %d, y |-> %d, z |-> %d, m |-> %d\n", x, y, z, m);

    /* Parte 2 */
    if (m < z)
    {
    }
    else
    {
        m = z;
    }

    printf("El resultado de Parte 2 es x |-> %d, y |-> %d, z |-> %d, m |-> %d\n", x, y, z, m);
    return 0;
}

/*
Este programa asigna a la variable m el valor del mínimo de los
variables x, y, e z. En Parte 1, m toma el valor del mínimo entre
x e y, y en Parte 2, m toma el valor del mínimo entre z y el resultado
de Parte 1.

------

Ingrese un valor para x (en el ejercicio original, es 5)
5
Ingrese un valor para y (en el ejercicio original, es 4)
4
Ingrese un valor para z (en el ejercicio original, es 8)
8
El resultado de Programa 1 es x |-> 5, y |-> 4, z |-> 8, m |-> 4
El resultado de Programa 2 es x |-> 5, y |-> 4, z |-> 8, m |-> 4

------

Ingrese un valor para x (en el ejercicio original, es 5)
5
Ingrese un valor para y (en el ejercicio original, es 4)
9
Ingrese un valor para z (en el ejercicio original, es 8)
1
El resultado de Programa 1 es x |-> 5, y |-> 9, z |-> 1, m |-> 5
El resultado de Programa 2 es x |-> 5, y |-> 9, z |-> 1, m |-> 1

*/