#include <stdio.h>

int main() {
	float salarioMinimo, valorUnitWatt, valorPagamento, valorDesconto;
	int qtdEnergia;
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salarioMinimo);
	
	printf("\nDigite a quantidade de quilowatts gasta pela residencia: ");
	scanf("%d", &qtdEnergia);
	
	valorUnitWatt = salarioMinimo / 5;
	valorPagamento = valorUnitWatt * qtdEnergia;
	valorDesconto = valorPagamento - (valorPagamento * 0.15);
		
	printf("\n\n O valor de cada quilowatt e: R$ %.2f", valorUnitWatt);
	printf("\n O valor total a ser pago pela residencia e: R$ %.2f", valorPagamento);
	printf("\n O valor a ser pago com desconto de 15 e: R$ %.2f", valorDesconto);
}


