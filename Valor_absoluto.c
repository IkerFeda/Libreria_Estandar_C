#include "stdlib.h"
#include "stdio.h"

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if (numero < 0)
    {
        numero = numero * -1;
    }
    printf("El valor absoluto es: %d", numero);
    return 0;
}