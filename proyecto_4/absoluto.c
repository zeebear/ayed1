/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 1(b)(ii) -- absoluto.c */

#include <stdio.h>
#include <assert.h>

/*
var  x : Int
{Pre: True}
if x ≥ 0 → 
  skip
⌷ x < 0 → 
  x := -x
fi
{Post: x > 0}
*/

int main(void)
{
    int x, y;
    printf("Ingrese un valor numérico entero:\n");
    scanf("%d", &x);
    assert(x);

    if (x < 0)
    {
        y = -x;
    }
    else
    {
        y = x;
    }
    assert(y >= 0);

    printf("El valor absoluto de %d es %d\n", x, y);

    return 0;
}
