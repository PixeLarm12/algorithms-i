// Faça um programa que receba duas notas de um aluno e seus respectivos pesos,
// calcule e imprima a média ponderada dessas notas.

#include <stdio.h>

int main() {
    double nota1, nota2, peso1, peso2, media;

    printf("Entre com a primeira nota e depois seu peso: \n");
    scanf("%lf %lf", &nota1, &peso1);

    printf("Entre com a segunda nota e depois seu peso: \n");
    scanf("%lf %lf", &nota2, &peso2);

    media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    printf("A media ponderada entre as notas é: %.2lf\n", media);

    return 0;
}
