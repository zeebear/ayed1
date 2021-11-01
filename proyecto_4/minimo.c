/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 1(b)(i) -- minimo.c */

#include <stdio.h>
#include <assert.h>

/*
 Var  r,x,y : Int ;
{ True }
if x ≤ y →
    r ≔ x
⌷ y ≤ x → 
    r ≔ y
fi
{ r ≤ x  ∧  r ≤ y  ∧  (r = x  ∨  r = y) }

*/

int main(void)
{
    int r, x, y;

    printf("Ingrese el primer valor numérico entero para comparar:\n");
    scanf("%d", &x);
    printf("Ingrese el segundo valor numérico entero para comparar:\n");
    scanf("%d", &y);
    assert(x && y);

    if (x <= y)
    {
        r = x;
    }
    else
    {
        r = y;
    }
    assert((r == x || r == y) && r <= x && r <= y);

    printf("El mínimo entre %d y %d es %d\n", x, y, r);

    return 0;
}