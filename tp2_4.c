#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad;
    int anios;
    int cantidad_nucleos;
    char *tipo_cpu;
};

void listarPCs(struct compu pcs[], int cantidad);

int main () {
    srand(time(NULL));
    int numAleat,num1,cantidad=5;
    char tipos[6][10] = {"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    struct compu pcs[5];

    printf("Ingrese la opcion que se adapte a sus necesidades:\n1. Listar PCs\n2. Mostrar PC más antigua\n3. Mostrar PC más veloz\n");
    scanf("%d",&num1);

    for (int i = 0;i<cantidad;i++) {
        numAleat = rand() % 6;
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anios = 2015 + rand () % 10;
        pcs[i].cantidad_nucleos = 1 + rand () % 8;
        pcs[i].tipo_cpu = tipos[numAleat];
    }

    switch (num1)
    {
    case 1:
            listarPCs(pcs,cantidad);
        break;
    }

    return 0;
}

void listarPCs(struct compu pcs[], int cantidad)
{
    printf("#######  LISTA DE PCs  #######\n\n");
    
        for (int i = 0; i < cantidad; i++)
        {
            printf("\n## MODELO %d ##\n",i+1);
            printf("Velocidad: %d Ghz\nAnio de fabricación: %d\nCantidad de Nucleos: %d\nTipo de Procesador: %s\n",pcs[i].velocidad,pcs[i].anios,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
        }
        
    }


void mostrarMasVieja(struct compu pcs[],int cantidad)
{
    

}

void mostrarMasveloz(struct compu pcs[], int cantidad)
{


}