/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 5a */

#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int i, j;
    printf("Ingrese un valor para x (en el ejercicio original, es 4)\n");
    scanf("%d", &i);
    printf("Ingrese un valor para y (en el ejercicio original, es 400)\n");
    scanf("%d", &j);

    /*
    i es la variable en programa 1.h
    j es la variable en programa 1.i
    */

    /* Programa 1.h */
    while (i != 0)
    {
        i = i - 1;
        /* printf("i |-> %d\n", i); */
    }

    /* Programa 1.i */
    while (j != 0)
    {
        j = 0;
        /* printf("j |-> %d\n", j); */
    }

    return 0;
}

/*
Usando printf(); para mostrar los valores de cada iteración:

Ingrese un valor para x (en el ejercicio original, es 4)
4
Ingrese un valor para y (en el ejercicio original, es 400)
400
i |-> 3
i |-> 2
i |-> 1
i |-> 0
j |-> 0
*/