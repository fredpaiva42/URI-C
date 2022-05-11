#include <stdio.h>

int ConversaoDeTempo() {

    int tempo, segundos, minutos, horas;

    scanf("%d", &tempo);

    horas = tempo / 3600;
    tempo %= 3600;
    minutos = tempo / 60;
    segundos = tempo % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}