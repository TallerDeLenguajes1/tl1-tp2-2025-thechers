#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
srand (time(NULL));
int i,j,*pMT;
int mt[N][M];

pMT = mt;

for (int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++){
        *(pMT + (i * M + j))  = 1 + rand() % 100;
        printf("%d  ",*(pMT + (i * M + j)));
        }

        printf ("\n");
    }   
    return 0;
}