#include <stdio.h>

int main() {
    int n, i, j;
    int M[50][50];
    int maxFila[50];
    int sumaMax = 0;
    int media;

    printf("Digite el tamanio de la matriz NxN: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento %d %d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        int max = M[i][0];
        for (j = 1; j < n; j++) {
            if (M[i][j] > max) {
                max = M[i][j];
            }
        }
        maxFila[i] = max;
        sumaMax += max;
    }

    media = sumaMax / n;

    printf("\nMaximos de cada fila:\n");
    for (i = 0; i < n; i++) {
        printf("Fila %d: %d\n", i + 1, maxFila[i]);
    }

    printf("\nMedia de los maximos: %d\n", media);

    return 0;
}

