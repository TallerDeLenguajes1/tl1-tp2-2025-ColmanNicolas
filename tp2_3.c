#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7
int main()
{
    srand(time(NULL));
    int i, j;
    int mt[N][M];
    int *puntero = &mt[0][0];
    printf("Matriz: %d x %d \n", N, M);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *puntero = 1 + rand() % 100;
            printf("%4d ", *puntero); // muestro el valor a donde estoy apuntando
            *puntero++;               // aumento en una la direccion de memoria
        }
        printf("\n");
    }
    return 0;
}