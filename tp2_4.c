#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 5

struct compu {
    int velocidad;
    int anios;
    int cantidad_nucleos;
    char *tipo_cpu;
};

void listarPCs(struct compu pcs[], int cantidad);

int main () {
    srand(time(NULL));
    int numAleat,num1,num2;
    char tipos[6][10] = {"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    struct compu pcs[TAMA];

    printf("Ingrese la opcion que se adapte a sus necesidades:\n1. Listar PCs\n2. Mostrar PC más antigua\n3. Mostrar PC más veloz\n");
    scanf("%d",&num1);

    for (int i = 0;i<TAMA;i++) {
        numAleat = rand() % 6;
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anios = 2015 + rand () % 10;
        pcs[i].cantidad_nucleos = 1 + rand () % 8;
        pcs[i].tipo_cpu = tipos[numAleat];
    }

    switch (num1)
    {
    case 1:
            printf("Ingrese cuántos modelos desea listar:\n");
            scanf("%d",&num2);
            listarPCs(pcs,num2);
        break;
    }

    return 0;
}

void listarPCs(struct compu pcs[], int cantidad)
{
    printf("#######  LISTA DE PCs  #######\n\n");
    switch (cantidad)
    {
        case 1:
    
        for (int i = 0; i < cantidad; i++)
        {
            printf("## MODELO %d ##\n",i+1);
            printf("Velocidad: %d Ghz\nAnio de fabricación: %d\nCantidad de Nucleos: %d\nTipo de Procesador: %s\n",pcs[i].velocidad,pcs[i].anios,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
        }
        break;
        
        case 2:
                for (int i = 0; i < cantidad; i++)
            {
                printf("## MODELO %d ##\n",i+1);
                printf("Velocidad: %d Ghz\nAnio de fabricación: %d\nCantidad de Nucleos: %d\nTipo de Procesador: %s\n",pcs[i].velocidad,pcs[i].anios,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
            }
        break;

        case 3:
                for (int i = 0; i < cantidad; i++)
            {
                printf("## MODELO %d ##\n",i+1);
                printf("Velocidad: %d Ghz\nAnio de fabricación: %d\nCantidad de Nucleos: %d\nTipo de Procesador: %s\n",pcs[i].velocidad,pcs[i].anios,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
            }
        break;
        case 4:
                for (int i = 0; i < cantidad; i++)
            {
                printf("## MODELO %d ##\n",i+1);
                printf("Velocidad: %d Ghz\nAnio de fabricación: %d\nCantidad de Nucleos: %d\nTipo de Procesador: %s\n",pcs[i].velocidad,pcs[i].anios,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
            }
        break;
        case 5:
                for (int i = 0; i < cantidad; i++)
            {
            printf("## MODELO %d ##\n",i+1);
            printf("Velocidad: %d Ghz\nAnio de fabricación: %d\nCantidad de Nucleos: %d\nTipo de Procesador: %s\n",pcs[i].velocidad,pcs[i].anios,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
            }
        break;
    
        default:
            printf("Cantidad equivocada. Solo se puede elegir entre 1 - 5...");
        break;
    }


}

void mostrarMasVieja(struct compu pcs[],int cantidad)
{


}

void mostrarMasveloz(struct compu pcs[], int cantidad)
{


}