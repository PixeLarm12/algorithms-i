// Qual o resultado das variáveis x, y e z depois da seguinte sequência de operações?
#include <stdio.h>

int main() {
    int x, y, z;
    x = y = 10; // tanto X, quanto Y estão valendo 10 inteiro.
    z = (x++); //Z passa a valor 10 e X = 11;
    z = x++; //Z passa a valor 11 e X = 12;
    x = -x; //X passa a ser -12;
    y++; //Y tem valor de 11;
    x = x + y – (z--); //X vai ser igual a 12 e, logo depois da atribuição, Z = 10;
    
    // RESPOSTA: 
    // x = 12;
    // y = 11;
    // z = 10;
}