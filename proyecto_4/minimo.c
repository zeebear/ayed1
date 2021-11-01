/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 1(b)(i) -- minimo.c */

#include <stdio.h>
#include <assert.h>

/*
 var m, x, y : Int ;
{ True }
if x ≤ y →
    m ≔ x
⌷ y ≤ x → 
    m ≔ y
fi
{ m ≤ x  ∧  m ≤ y  ∧  (m = x  ∨  m = y) }

*/

int main(void)
{
    int m, x, y;

    printf("Ingrese el primer valor numérico entero para comparar:\n");
    scanf("%d", &x);
    printf("Ingrese el segundo valor numérico entero para comparar:\n");
    scanf("%d", &y);
    assert(x && y);

    if (x <= y)
    {
        m = x;
    }
    else
    {
        m = y;
    }
    assert((m == x || m == y) && m <= x && m <= y);

    printf("El mínimo entre %d y %d es %d\n", x, y, m);

    return 0;
}