/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 1(b)(iiI) -- intercambio_variables.c */

#include <stdio.h>
#include <assert.h>

/*
var  x, y, z : Int
con X, Y : Int
{Pre: x = X, y = Y}
z := x;
x := y;
y := z;
{Post: x = Y, y = X}
*/

int main(void)
{
    int x, y, z, X, Y;
    printf("Ingrese un valor numérico entero para x:\n");
    scanf("%d", &X);
    printf("Ingrese un valor numérico entero para y:\n");
    scanf("%d", &Y);
    x = X;
    y = Y;
    assert(x == X && y == Y);
    printf("Antes de intercambiar los variables, x = %d e y = %d\n", x, y);

    z = x;
    x = y;
    y = z;
    assert(x == Y && y == X);

    printf("Después de intercambiar los variables, x = %d e y = %d\n", x, y);

    return 0;
}
