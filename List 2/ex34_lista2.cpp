#include <stdio.h>

#define PORCENTAGEM_AUMENTO 0.22 //22%

int main() {
	float salario;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
		
	printf("\n\n O valor do seu novo salario e: %.2f reais", (salario * PORCENTAGEM_AUMENTO) + salario);
}


