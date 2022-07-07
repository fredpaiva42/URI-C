#include <stdio.h>

int SomaDeImparesConsecutivosI() {

    int x, y, soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        x -= 1;
        while (x > y){
            if (x % 2 != 0){
                soma += x;
            }
            x--;
        }
    }else {
        y -= 1;
        while (x < y){
            if (y % 2 != 0){
                soma += y;
            }
            y--;
        }
    }

    printf("%d\n", soma);

    return 0;
}