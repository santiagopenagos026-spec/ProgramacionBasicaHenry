#include <stdio.h>

int main() {
    int n, i, j;
    int M[50][50];
    int maxFila[50];

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
    }

    printf("\nVector de maximos:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", maxFila[i]);
    }
    printf("\n");

    return 0;
}
