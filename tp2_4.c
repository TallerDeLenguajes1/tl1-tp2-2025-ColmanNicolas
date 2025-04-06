#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void listarPCs(struct compu pcs[],int cantidad){
    
}
void mostrarMasVieja(struct compu pcs[],int cantidad){
    
}
void listarPCs(struct compu pcs[],int cantidad){
    
}


int main()
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    srand(time(NULL));
    typedef struct compu
    {
        int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
        int anio;             // Año de fabricación (valor entre 2015 y 2024)
        int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
        char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
    } unaCompu;

    unaCompu stockCompu[4];
    for (int i = 0; i < 5; i++)  //genero 5 computadoras
    {
        stockCompu[i].velocidad = 1 + rand() % 3;
        stockCompu[i].anio = 2015 + rand() % 10; // genero años entre 2015 y 2024 inclusives
        stockCompu[i].cantidad_nucleos = 1 + rand() % 8;
        stockCompu[i].tipo_cpu = *(tipos + rand() % 6); // genero un indice entre 0 y 5

    }


    printf("Computadora n°: %d\n", i + 1);
    printf("Velocidad: %d GHz\n", miComputadora.velocidad);
    printf("Año: %d\n", miComputadora.anio);
    printf("Núcleos: %d\n", miComputadora.cantidad_nucleos);
    printf("Tipo de CPU: %s\n", miComputadora.tipo_cpu);
    printf("\n\n");

    return 0;
}