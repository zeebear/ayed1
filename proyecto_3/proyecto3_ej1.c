/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

// Ejercicio 1

#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int x, y, z;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);

    int i = x + y + 1;
    int j = z * z + y * 45 - 15 * x;
    int k = y - 2 == (x * 3 + 1) % 5;
    int l = y / 2 * x;
    bool m = y < x * z;

    printf("El resultado de x + y + 1 es %d\n", i);
    printf("El resultado de z * z + y * 45 - 15 * x es %d\n", j);
    printf("El resultado de y - 2 == (x * 3 + 1) %% 5 es %d\n", k);
    printf("El resultado de y / 2 * x es %d\n", l);
    printf("El resultado de y < x * z es %d\n", m);
    return 0;
}

/*
Ingrese un valor para x
7
Ingrese un valor para y
3
Ingrese un valor para z
5
El resultado de x + y + 1 es 11
El resultado de z * z + y * 45 - 15 * x es 55
El resultado de y - 2 == (x * 3 + 1) % 5 es 0
El resultado de y / 2 * x es 7
El resultado de y < x * z es 1

------

Ingrese un valor para x
1
Ingrese un valor para y
10
Ingrese un valor para z
8
El resultado de x + y + 1 es 12
El resultado de z * z + y * 45 - 15 * x es 499
El resultado de y - 2 == (x * 3 + 1) % 5 es 0
El resultado de y / 2 * x es 5
El resultado de y < x * z es 0

------

En la última expresión, el resultado es de tipo 'int' en el lenguaje 'C'.
Representan valores booleanos -- un '0' significa 'False', y un '1'
significa 'True'.
*/