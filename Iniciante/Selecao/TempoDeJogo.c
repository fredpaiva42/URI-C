#include <stdio.h>
#include <stdlib.h>

int TempoDeJogo() {

    int horaInicial, horaFinal, tempo = 0;

    scanf("%d %d", &horaInicial, &horaFinal);

    if (horaFinal > horaInicial){
        tempo = horaFinal - horaInicial;
    }else if(horaInicial == horaFinal){
        tempo = 24;
    }else {
        tempo = abs((horaInicial - horaFinal) - 24);
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}