// Altere o programa anterior para que sejam requisitados o dia, o mês e o ano
// atuais, o dia, o mês e o ano de nascimento do usuário, e então seja calculado
// e anunciado o número de dias vivido pelo usuário.

// #include <stdio.h>

// int main () {
//     int Dias;
//     float Anos;
//     printf ("\n\t Entre com o número de dias: ");
//     scanf ("%d", &Dias);
//     Anos = Dias/365.25;
//     printf ("\n\n\t %d dias equivalem a %f anos.\n",Dias,Anos);
// }

#include <stdio.h>

#define DIAS_ANO 365.25;
#define DIAS_MES 365.25 / 12;

int main() {
    int diaAtual, mesAtual, anoAtual,
        diaNascimento, mesNascimento, anoNascimento;
    float dias, diasPorMes, diasPorAno, diasMesDeNascimento, diasMesAtual;

    printf("Entre com seu dia, mês e ano de nascimento (99 99 9999):\n");
    scanf("%d %d %d", &diaNascimento, &mesNascimento, &anoNascimento);

    printf("Entre com o dia, mês e ano atual (99 99 9999):\n");
    scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    diasMesDeNascimento = DIAS_MES - diaNascimento;
    diasPorMes = (mesAtual - mesNascimento - 1) * DIAS_MES;
    diasPorAno = (anoAtual - anoNascimento) * DIAS_ANO;
    diasMesAtual = diaAtual - diaNascimento;

    dias = diasMesDeNascimento + diasPorMes + diasPorAno + diasMesAtual;

    printf("Você viveu %.0f dias.\n", dias);

    return 0;
}
