/*
----------------------------------------------------
Proyecto 3 AyED1
----------------------------------------------------
*/

/* Ejercicio 4a */

#include <stdio.h>
#include <stdbool.h>
int main(void)

{
    int x, y, a, b;
    printf("Ingrese un valor para x (en el ejercicio original, es 3)\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y (en el ejercicio original, es 1)\n");
    scanf("%d", &y);
    printf("Ingrese un valor para a (en el ejercicio original, es -100)\n");
    scanf("%d", &a);
    printf("Ingrese un valor para b (en el ejercicio original, es 1)\n");
    scanf("%d", &b);

    /*
    x e y son las variables en programa 1.e
    a y b son las variables en programa 1.f
    */

    /* Programa 1.e */
    if (x >= y)
    {
        x = 0;
    }
    else
    {
        x = 2;
    }

    /* Programa 1.f */
    if (a >= b)
    {
        a = 0;
    }
    else
    {
        a = 2;
    }

    printf("El resultado de Programa 1.e es x |-> %d, y |-> %d\n", x, y);
    printf("El resultado de Programa 1.f es a |-> %d, b |-> %d\n", a, b);
    return 0;
}

/*
Ingrese un valor para x (en el ejercicio original, era 3)
3
Ingrese un valor para y (en el ejercicio original, era 1)
1
Ingrese un valor para a (en el ejercicio original, era -100)
-100
Ingrese un valor para b (en el ejercicio original, era 1)
1
El resultado de Programa 1.e es x |-> 0, y |-> 1
El resultado de Programa 1.f es a |-> 2, b |-> 1
*/