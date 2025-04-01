#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int main()
{
    srand(time(NULL));
    int i;
    double vt[N];
    double *p = &vt[0];
    for (i = 0; i < N; i++)
    {
        *p = 1 + rand() % 100;
        printf("%.3lf\n", *p);
        p++; // incremento en 1 la direccion
    }
    printf("\n");
    return 0;
}