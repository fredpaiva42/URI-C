#include <stdio.h>

int RestoDaDivisao() {

    int x, y, temp = 0;

    scanf("%d %d", &x, &y);

    if (y < x){
        temp = y;
        y = x;
        x = temp;
    }

    for (int i = x + 1; i < y; i++){
        if (i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
    }

    return 0;
}