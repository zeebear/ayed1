#include <stdio.h>
#include <assert.h>

int suma_hasta(int N)
{
    int n, i, j;

    n = N;
    i = 0;
    j = n;

    while (i < j)
    {
        n = n + i;
        i++;
    }
    return n;
}

int main(void)
{
    int n, m;
    printf("Ingrese un valor numérico entero N:\n");
    scanf("%d", &n);
    assert(n > 0);

    m = suma_hasta(n);
    printf("La suma de todos los números hasta N = %d es %d\n", n, m);

    return 0;
}