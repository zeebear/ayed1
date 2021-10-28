#include <stdio.h>

/*
var x, y, z, w : Int
con X, Y, Z : Int
{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}

var x, y, z, w : Int
con X, Y, Z : Int
{Pre: x = X, y = Y, z = Z}
w := x
x := y
y := y + w + z
z := x + w

{Post: x = Y, y = Y + X + Z, z = Y + X}
*/

int main(void)
{
    int x, y, z, w;
    printf("Ingrese un valor numérico entero para X\n");
    scanf("%d", &x);
    printf("Ingrese un valor numérico entero para Y\n");
    scanf("%d", &y);
    printf("Ingrese un valor numérico entero para Z\n");
    scanf("%d", &z);

    printf("Pre: X = %d, Y = %d, Z = %d\n", x, y, z);
    w = x;
    x = y;
    y = y + w + z;
    z = x + w;
    printf("Post: X = %d, Y = %d, Z = %d\n", x, y, z);

    return 0;
}