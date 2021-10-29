#include <stdio.h>

int sumatoria(int a[], int tam)
{
    int i = 0;
    int n = 0;

    while (i < tam)
    {
        n = n + a[i];
        i++;
    }
    return n;
}

int main(void)
{
    /* asumiendo un tamaño constante de 4*/
    int tam = 4;
    int a[4];

    int i = 0;
    int n;

    while (i < tam)
    {
        printf("Ingrese el próximo número entero para sumar:\n");
        scanf("%d", &n);
        a[i] = n;
        i++;
    }

    int sum = sumatoria(a, tam);
    printf("La suma de los números ingresados es:    %d\n", sum);

    return 0;
}