#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define M 10
#define N 15



typedef struct
{
    int r,g,b;
}RGB;

void carregaMatriz(RGB matriz[][M],int,int);
void imprimirMatriz(RGB matriz[][M],int,int);
void convertGray(RGB[][M],int [][M]);
void imprimirMatrizGray(int [][M]);

int main() {
    srand(time(NULL));
    RGB ma[N][M];
    int gray[N][M];
    carregaMatriz(ma,N,M);
    imprimirMatriz(ma,N,M);
    convertGray(ma,gray);
    imprimirMatrizGray(gray);
    return 0;
}

void imprimirMatrizGray(int gray[][M]) {
        int i,j;
        printf("MATRIZ GRAY")
        for(i=0;i<N;i++) {
            for(j=0;j<M;j++) {
                printf("\t%i-%i-%i", gray[i][j]);
            }
            printf("\n");
        }
}

void carregaMatriz(RGB matriz[][M],int n,int m) {
    int i,j;
        for(i=0;i<N;i++) {
            for(j=0;j<M;j++) {
                matriz[i][j].r = rand() % 255;
                matriz[i][j].g = rand() % 255;
                matriz[i][j].b = rand() % 255;
            }
        }
}

void imprimirMatriz(RGB matriz[][M],int n,int m) {
    int i,j;
        for(i=0;i<N;i++) {
            for(j=0;j<M;j++) {
                printf("\t%i-%i-%i", matriz[i][j].r,matriz[i][j].g,matriz[i][j].b);
            }
            printf("\n");
        }
}

void convertGray(RGB matriz[][M],int gray[][M]) {
    int i,j;
        for(i=0;i<N;i++) {
            for(j=0;j<M;j++) {
                gray[i][j] = matriz[i][j].r*0.3 + matriz[i][j].g*0.59 + matriz[i][j].b*0.11;
            }
        }
}

