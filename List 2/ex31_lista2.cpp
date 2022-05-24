#include <stdio.h>

int main() {
	int hora, minuto, resultado;
	
	printf("Digite o valor da hora (sem minutos): ");
	scanf("%d", &hora);
	
	printf("\nDigite o valor dos minutos: ");
	scanf("%d", &minuto);
	
	resultado = (hora * 60) + minuto;
	
	printf("\n\n O horario digitado equivale a %d minutos", resultado);
}





