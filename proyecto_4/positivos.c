#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool existe_positivo(int a[], int tam)
{
    int i = 0;
    bool hay = false;

    while (i < tam)
    {
        if (a[i] > 0)
        {
            hay = true;
            /* no sé si es considerado 'buena práctica' usar 'break' aquí para potencialmente hacerlo más rápido para arreglos grandes */
        }
        i++;
    }

    return hay;
}

bool todos_positivos(int a[], int tam)
{
    int i = 0;
    bool hay = true;

    while (i < tam)
    {
        if (a[i] < 0)
        {
            hay = false;
            /* no sé si es considerado 'buena práctica' usar 'break' aquí para potencialmente hacerlo más rápido para arreglos grandes */
        }
        i++;
    }

    return hay;
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
        printf("Ingrese el próximo número entero del arreglo:\n");
        scanf("%d", &n);
        a[i] = n;
        i++;
    }

    int elige;
    bool hay_positivo;
    printf("Para saber si hay un número positivo en el arreglo, marque 1 y presione 'enter'. Para saber si todos los números del arreglo son positivos, marque 2 y presione 'enter'.:\n");
    scanf("%d", &elige);

    if (elige == 1)
    {
        hay_positivo = existe_positivo(a, tam);
        if (hay_positivo)
        {
            printf("Hay al menos un número positivo en el arreglo\n");
        }
        else
        {
            printf("No hay ningún número positivo en el arreglo\n");
        }
    }
    else
    {
        hay_positivo = todos_positivos(a, tam);
        if (hay_positivo)
        {
            printf("Todos los números del arreglo son positivos\n");
        }
        else
        {
            printf("Hay al menos un número negativo en el arreglo\n");
        }
    }

    return 0;
}
