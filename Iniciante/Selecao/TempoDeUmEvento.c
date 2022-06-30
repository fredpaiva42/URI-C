#include <stdio.h>

int TempoDeUmEvento() {

    char dia[4];
    int diaI, diaF, hI, hF, mI, mF, sI, sF, dias, horas, minutos, segundos;

    scanf("%s %d", &dia, &diaI);
    scanf("%d : %d : %d", &hI, &mI, &sI);
    scanf("%s %d", &dia, &diaF);
    scanf("%d : %d : %d", &hF, &mF, &sF);

    dias = diaF - diaI;
    horas = hF - hI;
    minutos = mF - mI;
    segundos = sF - sI;

    if (segundos < 0){
        segundos += 60;
        minutos--;
    }

    if (minutos < 0){
        minutos += 60;
        horas--;
    }

    if (horas < 0){
        horas += 24;
        dias--;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}