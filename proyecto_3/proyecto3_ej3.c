/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

// Ejercicio 3

#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int x, y, z, a, b;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para z\n");
    scanf("%d", &a);
    printf("Ingrese un valor para z\n");
    scanf("%d", &b);

    /*
    x es la variable en programa 1.a
    y e z son las variables en programa 1.b
    a y b son las variables en programa 1.c
    */

    // Programa 1.a
    x = 5;

    // Programa 1.b
    y = y + z;
    z = z + z;

    // Programa 1.c
    b = b + b;
    a = a + b;

    printf("El resultado de Programa 1.a es x |-> %d\n", x);
    printf("El resultado de Programa 1.b es x |-> %d\n, y |-> %d", y, z);
    printf("El resultado de Programa 1.b es %d\n", k);
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
El resultado de y - 2 == (x * 3 + 1) mod 5 es 0
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
El resultado de y - 2 == (x * 3 + 1) mod 5 es 0
El resultado de y / 2 * x es 5
El resultado de y < x * z es 0

------

En la última expresión, el resultado es de tipo 'int' en el lenguaje 'C'.
Representan valores booleanos -- un '0' significa 'False', y un '1'
significa 'True'.
*/