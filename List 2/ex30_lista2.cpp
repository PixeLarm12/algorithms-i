#include <stdio.h>

#define SALARIO_MINIMO 1212.00 //2022

int main() {
	float salario;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
	
	
	printf("\n\n O valor digitado equivale a %.2f salario(s) minimo(s)", salario/SALARIO_MINIMO);
}





