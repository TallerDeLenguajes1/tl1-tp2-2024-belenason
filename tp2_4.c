#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef compu;

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void cargarCompus(compu *pc, int cant);
void presentarCompus(compu *pc, int cant);
void vieja(compu *pc, int cant);
void veloz(compu *pc, int cant);

int main()
{
    compu arregloPc[N], *puntArreglo;
    puntArreglo = arregloPc;
    cargarCompus(puntArreglo, N);
    presentarCompus(puntArreglo, N);
    vieja(puntArreglo, N);
    veloz(puntArreglo, N);

    return 0;
}

void cargarCompus(compu *pc, int cant){
    srand(time(NULL));
    int indice;
    for (int i = 0; i < N; i++)
    {
        (pc + i)->velocidad =  1+rand()%(3 - 1 + 1);
        (pc + i)->anio =  2015+rand()%(2023 - 2015 + 1);
        (pc + i)->cantidad =  1+rand()%(8 - 1 + 1);
        (pc + i)->tipo_cpu =  tipos[0+rand()%(5 - 0 + 1)];
    }
}

void presentarCompus (compu *pc, int cant)
{
    for(int i = 0; i<cant;i++)
    {
       printf("\nComputadora %d", i+1);
       printf("\nVelocidad de la computadora: %d GHz", (pc + i)->velocidad);
       printf("\nAno de la computadora: %d", (pc + i)->anio);     
       printf("\nCantidad de nucleos de la computadora: %d", (pc + i)->cantidad);
       printf("\nTipo de procesador de la computadora: %s", (pc + i)->tipo_cpu); 
       printf("\n");       
    }
}

void vieja(compu *pc, int cant){
    int menor = 3000;
    int vieja;
    for (int i = 0; i < cant; i++)
    {
        if ((pc+i)->anio < menor)
        {
            menor = (pc+i)->anio;
        }
    }
    printf("\nLa/s computadora/s mas vieja/s es/son: \n");
    for (int i = 0; i < 5; i++)
    {
        if ((pc+i)->anio == menor)
        {
            printf("\nComputadora %d", i+1);
            printf("\nVelocidad de la computadora: %d GHz", (pc + i)->velocidad);
            printf("\nAno de la computadora: %d", (pc + i)->anio);     
            printf("\nCantidad de nucleos de la computadora: %d", (pc + i)->cantidad);
            printf("\nTipo de procesador de la computadora: %s", (pc + i)->tipo_cpu); 
            printf("\n"); 
        }
        
    }
}

void veloz(compu *pc, int cant){
    int mayor = 0;
    int veloz;
    for (int i = 0; i < cant; i++)
    {
        if ((pc+i)->velocidad > mayor)
        {
            mayor = (pc+i)->velocidad;
            veloz = i+1;
        }
    }
    printf("\nLa/s computadora/s con mayor velocidad es/son: \n");
    for (int i = 0; i < 5; i++)
    {
        if ((pc+i)->velocidad == mayor)
        {
            printf("\nComputadora %d", i+1);
            printf("\nVelocidad de la computadora: %d GHz", (pc + i)->velocidad);
            printf("\nAno de la computadora: %d", (pc + i)->anio);     
            printf("\nCantidad de nucleos de la computadora: %d", (pc + i)->cantidad);
            printf("\nTipo de procesador de la computadora: %s", (pc + i)->tipo_cpu); 
            printf("\n");         
        }
        
    }
}