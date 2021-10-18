/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 3 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int main(void)

{
    int x, y, z, a, b;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para a\n");
    scanf("%d", &a);
    printf("Ingrese un valor para b\n");
    scanf("%d", &b);

    /*
    x es la variable en programa 1.a
    y e z son las variables en programa 1.b
    a y b son las variables en programa 1.c
    */

    /*
    Versión con 'assert' para establecer las precondiciones de los ejercicios originales:

    printf("Ingrese 1 para x\n");
    scanf("%d", &x);
    assert(x==1);
    printf("Ingrese 2 para y\n");
    scanf("%d", &y);
    assert(y==2);
    printf("Ingrese 5 para z\n");
    scanf("%d", &z);
    assert(z==5);
    printf("Ingrese 2 para a\n");
    scanf("%d", &a);
    assert(a==2);
    printf("Ingrese 5 para b\n");
    scanf("%d", &b);
    assert(b==5);
    */

    /* Programa 1.a */
    x = 5;

    /* Programa 1.b */
    y = y + z;
    z = z + z;

    /* Programa 1.c */
    b = b + b;
    a = a + b;

    printf("El resultado de Programa 1.a es x |-> %d\n", x);
    printf("El resultado de Programa 1.b es y |-> %d, z |-> %d\n", y, z);
    printf("El resultado de Programa 1.c es a |-> %d, b |-> %d\n", a, b);
    return 0;
}

/*
EJECUCION 1:
Ingrese un valor para x
1
Ingrese un valor para y
2
Ingrese un valor para z
5
Ingrese un valor para a
2
Ingrese un valor para b
5
El resultado de Programa 1.a es x |-> 5
El resultado de Programa 1.b es y |-> 7, z |-> 10
El resultado de Programa 1.c es a |-> 12, b |-> 10

------

EJECUCION 2:
Ingrese un valor para x
3
Ingrese un valor para y
5
Ingrese un valor para z
7
Ingrese un valor para a
5
Ingrese un valor para b
7
El resultado de Programa 1.a es x |-> 5
El resultado de Programa 1.b es y |-> 12, z |-> 14
El resultado de Programa 1.c es a |-> 19, b |-> 14

------

EJECUCION 3:
Ingrese un valor para x
7
Ingrese un valor para y
2
Ingrese un valor para z
6
Ingrese un valor para a
2
Ingrese un valor para b
6
El resultado de Programa 1.a es x |-> 5
El resultado de Programa 1.b es y |-> 8, z |-> 12
El resultado de Programa 1.c es a |-> 14, b |-> 12
*/