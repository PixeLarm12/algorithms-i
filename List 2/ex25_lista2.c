// Escreva um programa que receba o valor de um depósito e o valor da taxa de juros.
// Calcule e imprima o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>

int main() {
    double deposito, juros;

    printf("Entre o valor do deposito:\n");
    scanf("%lf", &deposito);

    printf("Entre o valor da taxa de juros:\n");
    scanf("%lf", &juros);

    printf(
        "Seu deposito de %.2lf depois do rendimento dos juros de %.2lf%% totalizará: %.2lf\n",
        deposito,
        juros,
        deposito * (juros / 100 + 1));

    return 0;
}
