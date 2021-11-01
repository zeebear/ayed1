/*
----------------------------------------------------
Parcialito 2 AyED1 2021
----------------------------------------------------
*/

/* Ejercicio 1 -- asignación múltiple */

#include <stdio.h>
#include <assert.h>

/*
var x, y, z: Int;
{Pre: x = X, y = Y, z = Z, Z * X ≠ Y, Z * Y ≠ 0}
x, y := (z + y) / (z * x - y), z mod y
{Post: x = (Z + Y) / (Z * X - Y), y = Z mod Y}
*/

int main(void)
{
    int x, y, z, a, X, Y, Z;

    printf("Ingrese el primer valor numérico entero:\n");
    scanf("%d", &X);
    printf("Ingrese el segundo valor numérico entero:\n");
    scanf("%d", &Y);
    printf("Ingrese el tercer valor numérico entero:\n");
    scanf("%d", &Z);
    x = X;
    y = Y;
    z = Z;
    assert(x == X && y == Y && z == Z && Z * X != Y && Z * Y != 0);
    printf("Los valores iniciales son: x = %d, y = %d, z = %d\n", x, y, z);

    a = x;
    x = (z + y) / (z * a - y);
    y = z % y;
    assert(x == (Z + Y) / (Z * X - Y) && y == Z % Y);

    printf("Los valores finales son: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}