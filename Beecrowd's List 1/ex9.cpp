#include <stdio.h>

int main() {
	int NUMBER, hours;
	float amount, SALARY;
	
	scanf("%d", &NUMBER);
	scanf("%d", &hours);
	scanf("%f", &amount);
	
	SALARY = hours * amount;
	
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %0.2f\n", SALARY);
	
	return 0;
}
