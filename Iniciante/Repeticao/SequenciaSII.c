#include <stdio.h>

int SequenciaSII (void){
    double S = 0;
    int j = 1;

    for (int i = 1; i <= 39; i += 2) {
        S += (double) i/j;
        j *= 2;
    }

    printf("%.2lf\n", S);

    return 0;
}