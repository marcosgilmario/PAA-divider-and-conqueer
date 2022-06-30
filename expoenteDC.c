#include <stdio.h>
#include <stdlib.h>

int exponenciacao(float a, int n)
{
    float an;
    int i = 0;
    printf("expoente eh: %d\n", n);
    if (n == 0)
    {
        printf("\ncaso base retorna 1 - %.0f elevado a %d\n\n", a, n);
        return 1;
    }
    else
    {
        printf("divisao\n");
        float aux = exponenciacao(a, n / 2);
        printf("retorno:%.0f\n", aux);
        an = (float)aux * aux;
        printf("%.0f %.0f = %.0f\n", aux, aux, an);
        if (n % 2 == 1)
        {
            an = (float)an * a;
            printf("expoente= %d mod 2 he:%d\n", n, n % 2);
            printf(" resultado alterado para: %.0f\n", an);
        }
        printf(" %.0f elevado a %d resultado: %.0f\n\n", a, n, an);
        return an;
    }
}
int main(void)
{
    int exp;
    float num, result;
    printf("Insira a base da exponenciacao: ");
    scanf("%f", &num);
    printf("Insira o expoente: ");
    scanf("%d", &exp);

    result = exponenciacao(num, exp);
    printf("\nResultado final: %.0f", result);
    return 0;
}