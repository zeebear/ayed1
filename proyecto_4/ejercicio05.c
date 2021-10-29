#include <stdio.h>
#include <assert.h>

void pedirArreglo(int a[], int n_max)
{
    int i = 0;
    int n;

    while (i < n_max)
    {
        printf("Ingrese el próximo número entero del arreglo:\n");
        scanf("%d", &n);
        a[i] = n;
        i++;
    }
}

void imprimeArreglo(int a[], int n_max)
{
    int i = 0;
    int n;

    printf("[");
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
    int n_max;
    printf("Ingrese la cantidad de números en el arreglo:\n");
    scanf("%d", &n_max);

    int a[n_max];
    pedirArreglo(a, n_max);
    imprimeArreglo(a, n_max);
    return 0;
}