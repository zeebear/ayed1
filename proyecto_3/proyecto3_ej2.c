/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 2 */

#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int x = 8;
    int y = -8;
    int z = 16;
    bool b = true;
    bool w = true;

    bool i = x % 4 == 0;
    bool j = x + y == 0 && y - x == (-1) * z;
    bool k = !b && w;

    printf("x %% 4 == 0 es %s\n", i ? "True" : "False");
    printf("x + y == 0 && y - x == (-1) * z es %s\n", j ? "True" : "False");
    printf("not b && w es %s\n", k ? "True" : "False");
    return 0;
}

/*
Valores:
x = 8
y = -8
z = 16
b = true
w = true

Resultados:
x % 4 == 0 es True
x + y == 0 && y - x == (-1) * z es True
not b && w es False
*/