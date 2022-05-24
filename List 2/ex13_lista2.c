// Execute o programa abaixo e comente os resultados obtidos.

#include <stdio.h>

int main () {
    float x, y; //declaração de variável
    printf ("\n Digite dois numeros: "); //mensagem ao usuário
    scanf ("%f %f", &x, &y); //guardará o valor de X e Y;
    printf ( "\n O produto de %f e %f eh %f ", x, y, x*y ); //mostra o resultado de X vezes Y
    printf ( "\n O quociente de %f e %f eh %f ", x, y, x/y); //mostra o resultado de X dividido Y
}