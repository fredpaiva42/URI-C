#include <stdio.h>

int ParOuImpar() {

    int quantidade, entrada;

    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        scanf("%d", &entrada);

        if (entrada == 0)
            printf("NULL\n");
        else {
            if (entrada > 0){
                if (entrada % 2 == 0)
                    printf("EVEN POSITIVE\n");
                else
                    printf("ODD POSITIVE\n");
            }else {
                if (entrada % 2 == 0)
                    printf("EVEN NEGATIVE\n");
                else
                    printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}