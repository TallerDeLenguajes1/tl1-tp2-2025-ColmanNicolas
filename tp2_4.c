#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
} unaCompu;

void listarPCs(struct compu pcs[],int cantidad){
    if (cantidad <= 0) return; 
    for(int i=0; i<cantidad;i++){
        printf("Computadora n°: %d\n", i+1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("Año: %d\n", pcs[i].anio);
        printf("Núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
        printf("\n\n");
    }
}
void mostrarMasVieja(struct compu pcs[],int cantidad){
    if (cantidad <= 0) return; 
    int indice = 0;
    int anioMin = pcs[0].anio;

    for(int i = 1; i<cantidad; i++ ){
        if (pcs[i].anio < anioMin)
        {
            anioMin = pcs[i].anio;
            indice = i;
        }            
    }
    printf("\nPC mas vieja\n");
    listarPCs(&pcs[indice],1);
}
void mostrarMasVeloz(struct compu pcs[],int cantidad){
    if(cantidad <= 0) return;

    int indice = 0;
    int velMin = pcs[0].velocidad;
    for(int i = 1; i<cantidad; i++ ){
        if (pcs[i].velocidad > velMin)
        {
            velMin = pcs[i].velocidad;
            indice = i;
        }            
    }
    printf("\nPC mas rapida\n");
    listarPCs(&pcs[indice],1);
}


int main()
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    srand(time(NULL));
    unaCompu stockCompu[5];

    for (int i = 0; i < 5; i++)  //genero 5 computadoras
    {
        stockCompu[i].velocidad = 1 + rand() % 3;
        stockCompu[i].anio = 2015 + rand() % 10; // genero años entre 2015 y 2024 inclusives
        stockCompu[i].cantidad_nucleos = 1 + rand() % 8;
        stockCompu[i].tipo_cpu = *(tipos + rand() % 6); // genero un indice entre 0 y 5
    }
    
    listarPCs(stockCompu, 5);

    mostrarMasVieja(stockCompu,5);

    mostrarMasVeloz(stockCompu,5);

    return 0;
}