#include <stdio.h>

#define SENHA 2002

int SenhaFixa() {

    int entrada;

    scanf("%d", &entrada);

    while (entrada != SENHA){
        printf("Senha Invalida\n");
        scanf("%d", &entrada);
    }

    printf("Acesso Permitido\n");

    return 0;
}