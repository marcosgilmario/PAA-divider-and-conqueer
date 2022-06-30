#include <stdio.h>

int main()
{
    int x, n, potencia, contador;

    printf("\n\tCalculo de potencias\n");
    printf("\nDigite a base da exponenciacao: ");
    scanf("%d", &x);
    printf("Digite o expoente: ");
    scanf("%d", &n);

    potencia = 1;
    contador = 0;

    while (contador != n)
    {
        potencia = potencia * x;
        contador = contador + 1;
    }

    printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
    return 0;
}
