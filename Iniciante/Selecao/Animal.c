#include <stdio.h>
#include <string.h>

int Animal() {

    char caracteristica1[20], caracteristica2[20], caracteristica3[20];

    scanf("%s", caracteristica1);
    scanf("%s", caracteristica2);
    scanf("%s", caracteristica3);

    if (strcmp(caracteristica1, "vertebrado") == 0){
        if (strcmp(caracteristica2, "ave") == 0){
            if (strcmp(caracteristica3, "carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }else {
            if (strcmp(caracteristica3, "onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }else {
        if (strcmp(caracteristica2, "inseto") == 0){
            if (strcmp(caracteristica3, "hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }else {
            if (strcmp(caracteristica3, "onivoro") == 0)
                printf("minhoca\n");
            else
                printf("sanguessuga\n");
        }
    }


    return 0;
}