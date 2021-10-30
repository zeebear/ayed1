#include <stdio.h>
#include <assert.h>

void intercambiar(int a[], int tam, int i, int j)
{
    assert(i < tam);
    assert(j < tam);

    int x = a[i];
    a[i] = a[j];
    a[j] = x;
}

/* reutilizo la función de ejercicio 5 */
void imprimeArreglo(int a[], int n_max)
{
    int i = 0;
    int n;

    printf("Ahora el arreglo es [");
    while (i < n_max - 1)
    {
        n = a[i];
        printf("%d, ", n);
        i++;
    }
    n = a[i];
    printf("%d]\n", n);
}

int main(void)
{
    /* asumiendo un tamaño constante de 4 */
    int tam = 4;
    int a[4];

    int i = 0;
    int n, j;

    while (i < tam)
    {
        printf("Ingrese el próximo número entero del arreglo:\n");
        scanf("%d", &n);
        a[i] = n;
        i++;
    }

    printf("Ingrese el índice del primer número que quiere intercambiar:\n");
    scanf("%d", &i);

    printf("Ingrese el índice del segundo número que quiere intercambiar:\n");
    scanf("%d", &j);

    intercambiar(a, tam, i, j);
    imprimeArreglo(a, tam);

    return 0;
}