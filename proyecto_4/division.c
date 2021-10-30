/*
----------------------------------------------------
Proyecto 4 AyED1
----------------------------------------------------
*/

/* Ejercicio 4 -- division.c */

#include <stdio.h>
#include <assert.h>

struct div_t
{
    int cociente;
    int resto;
};

struct div_t division(int x, int y)
{
    int i = 0;
    struct div_t div;

    while (x >= y)
    {
        x = x - y;
        i++;
    }

    div.cociente = i;
    div.resto = x;
    return div;
}

int main(void)
{
    int n, m;
    printf("Ingrese el valor numérico entero del dividendo:\n");
    scanf("%d", &n);
    assert(n >= 0);
    printf("Ingrese el valor numérico entero del divisor:\n");
    scanf("%d", &m);
    assert(m > 0);

    struct div_t respuesta = division(n, m);
    int coc = respuesta.cociente;
    int res = respuesta.resto;

    printf("En la división de %d por %d, el cociente es %d y el resto es %d\n", n, m, coc, res);
    return 0;
}