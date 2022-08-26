# include <stdio.h>

int SequenciaS (void) {

    double S = 1;

    for (int i = 2; i <= 100; ++i) {
        S += (double) 1/i;
    }

    printf("%.2lf\n", S);

    return 0;
}