// Explique a execução do programa. Comente o que faz cada linha e, explique o motivo
// da variável Dias ser inteira e Anos ser real.

#include <stdio.h>

int main () {
    int Dias;
    float Anos;
    printf ("\n\t Entre com o número de dias: ");
    scanf ("%d", &Dias);
    Anos = Dias/365.25;
    printf ("\n\n\t %d dias equivalem a %f anos.\n",Dias,Anos);
}

// RESPOSTA:
// Nas duas primeiras linhas tem-se a declaração da varíavel Dias e Anos. Logo abaixo, o printf mostrará uma 
// mensagem que pede para o usuário digitar um número específico em dias, a linha abaixo irá pegar esse valor e armazenar na varíavel Dias.

// Abaixo tem-se uma operação que converte os dias digitados num número real em anos. A divisão do inteiro Dias 
// por um real '365.25' (dias do ano) implica na variável Anos sem um real, uma vez que o retorno da conta será exatamente esse.

// Na última linha tem a mensagem do valor digitado anteriormente e sua equivalência, em valor número, em anos.
