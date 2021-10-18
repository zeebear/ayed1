/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 5b */

#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int x, y, i, a, j;
    printf("Ingrese un valor numérico para x (en el ejercicio original, es 13)\n");
    scanf("%d", &x);
    printf("Ingrese un valor numérico para y (en el ejercicio original, es 3)\n");
    scanf("%d", &y);
    printf("Ingrese un valor numérico para i (en el ejercicio original, es 0)\n");
    scanf("%d", &i);
    printf("Ingrese un valor numérico para a (en el ejercicio original, es 5)\n");
    scanf("%d", &a);
    printf("Ingrese un valor numérico para j (en el ejercicio original, es 0)\n");
    scanf("%d", &j);
    int temp;
    bool res; /* declaración de variables*/
    printf("Ingrese un valor booleano para res (en el ejercicio original, es 0)\n");
    scanf("%d", &temp);
    res = temp;

    /*
    x, y, i son las variables en programa 1
    a, j, res son las variables en programa 2
    */

    /* Programa 1 */
    i = 0;
    while (x >= y)
    {
        x = x - y;
        i = i + 1;
        /* printf("x |-> %d, y |-> %d, i |-> %d\n", x, y, i); */
    }

    /* Programa 2 */
    j = 2;
    res = true;
    while (j < a && res == true)
    {
        res = res && (a % j != 0);
        j = j + 1;
        /* printf("a |-> %d, j |-> %d, res |-> %d\n", a, j, res); */
    }

    return 0;
}

/*
Programa 1:
Luego de iteración 1:
x |-> 10, y |-> 3, i |-> 1
Luego de iteración 2:
x |-> 7, y |-> 3, i |-> 2
Luego de iteración 3:
x |-> 4, y |-> 3, i |-> 3
Luego de iteración 4:
x |-> 1, y |-> 3, i |-> 4

Primero, el programa pone el índice igual a 0. Después, cada iteración
resta el valor de y del valor de x, y a la vez aumenta el índice con 1,
hasta que el valor de x es menor que el valor de y.

------

Programa 2:
Luego de iteración 1:
a |-> 5, j |-> 3, res |-> 1
Luego de iteración 2:
a |-> 5, j |-> 4, res |-> 1
Luego de iteración 3:
a |-> 5, j |-> 5, res |-> 1

Primero, el programa pone el índice igual a 2 (si el índice fuese 0 o 1,
x % i != 0 sería falso para cualquier valor de x), y pone res igual a True.
Después, cada iteración aumenta el índice con 1, hasta que x % i != 0 
esté falso.
*/