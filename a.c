#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 15

typedef struct {
    int r,g,b;
} RGB;

void carregaMatriz(RGB[N][M]);

int main() {
   srand(time (NULL));

   RGB rgb[N][M];
   RGB gray[N][M];

    return 0;

}

void carregaMatriz(RGB imagem[N][M]) {
    int i,j;
    for(i=0;i<N;i++) {
        for(j=0;j<M;j++) {
            imagem[i][j].r =  rand() % 255;
            imagem[i][j].g = rand() % 255;
            imagem[i][j].b = rand() % 255;
        }
    }
}
void imprimirMatriz(RGB imagem[N][M]) {
    int i,j;
    for(i=0;i<N;i++) {
        for(j=0;j<M;j++) {
            printf("\t(%i%i%i)",
                imagem[i][j].r,
                imagem[i][j].g,
                imagem[i][j].b);
        }
    }
}
void convert(RGB imagem[N][M],int gray[N][M]) {

    for(int i=0;i<N;i++) {
        for(int j;j<M;j++) {
            gray[i][j] = (int) (imagem[i][j].r * 0.3 + 0.590 * imagem[i][j].g + 0.110 * imagem[i][j].b);
        }
    }
}
