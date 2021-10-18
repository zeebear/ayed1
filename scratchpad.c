#include <stdio.h>
#include <stdbool.h> /* biblioteca estándar de booleanos*/
int main(void)

{
    int temp;
    bool x;                   /* declaración de variables*/
    x = true;                 /*true es una constante definida como 1*/
    x = false;                /* es una constante definida como 0 */
    scanf("%d", &temp);       /* en realidad pedimos un entero por
teclado, no un booleano, usamos temp, ya que scanf no tiene
definido un '%' para bool */
    x = temp;                 /* asignamos para que el valor quede en x */
    printf("x vale %d\n", x); /* en realidad imprimimos un entero,
no un booleano, */
    return 0;
}
