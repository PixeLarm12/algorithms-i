// Faça um programa que receba a medida de um ângulo em graus, calcule e
// imprima o seno, o cosseno e a tangente desse ângulo.

#include <math.h>
#include <stdio.h>

int main() {
    double deg, rad;

    printf("Entre a medida do ângulo em graus:\n");
    scanf("%lf", &deg);

    // Converte graus para radianos
    rad = deg * (M_PI / 180.0);

    printf("Para um ângulo de %.2lf graus:\n", deg);
    printf(
        "Seno: %lf\nCosseno: %lf\nTangente: %lf\n",
        sin(rad), cos(rad), tan(rad));

    return 0;
}
