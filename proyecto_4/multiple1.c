/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 2 -- multiple1.c */

#include <stdio.h>

/*
var x, y : Int
con X, Y : Int
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}

var x, y, z : Int
con X, Y : Int
{Pre: x = X, y = Y}
z := x
x := x + 1
y := z + y
{Post: x = X + 1, y = X + Y}

*/

int main(void)
{
    int x, y, z;
    printf("Ingrese un valor numérico entero para X\n");
    scanf("%d", &x);
    printf("Ingrese un valor numérico entero para Y\n");
    scanf("%d", &y);

    printf("Pre: X = %d, Y = %d\n", x, y);
    z = x;
    x = x + 1;
    y = z + y;
    printf("Post: X = %d, Y = %d\n", x, y);

    return 0;
}