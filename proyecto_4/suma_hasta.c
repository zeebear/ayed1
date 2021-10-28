#include <stdio.h>
#include <assert.h>

int main(void)
{
    int n, i, j;
    printf("Ingrese un valor numérico entero N:\n");
    scanf("%d", &n);
    assert(n > 0);

    i = 0;
    j = n;

    while (i < j)
    {
        n = n + i;
        i++;
    }

    printf("La suma de todos los números hasta N = %d es %d\n", i, n);

    return 0;
}