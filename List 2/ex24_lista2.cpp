#include <stdio.h>

int main() {
	int number;
	
	printf("Digite um valor inteiro qualquer: ");
	scanf("%d", &number);
	
	printf("\n\n Tabuada de %d", number);
	
	for(int i = 0; i <= 10; i++) {
		printf("\n %d x %d = %d", number, i, number*i);	
	}
}










