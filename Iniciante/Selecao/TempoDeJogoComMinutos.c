#include <stdio.h>

int main() {

    int horaInicial, minutoInicial, horaFinal, minutoFinal, tempo, tempoH, tempoM;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    tempo = ((horaFinal * 60) + minutoFinal) - ((horaInicial * 60) + minutoInicial);

    if (tempo <= 0)
        tempo += 24 * 60;

    tempoH = tempo / 60;
    tempoM = tempo % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempoH, tempoM);

    return 0;
}