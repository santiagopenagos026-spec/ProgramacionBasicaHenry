#include <stdio.h>

int main() {
    int n, m, i, j;
    int M[50][50];
    int max, min, suma = 0, total;
    int media;

    printf("Digite el numero de filas: ");
    scanf("%d", &n);
    printf("Digite el numero de columnas: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Elemento %d %d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    max = min = M[0][0];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (M[i][j] > max) max = M[i][j];
            if (M[i][j] < min) min = M[i][j];
            suma += M[i][j];
        }
    }

    total = n * m;
    media = suma / total;

    printf("\nValor maximo: %d", max);
    printf("\nValor minimo: %d", min);
    printf("\nMedia de la matriz: %d n", media);

    return 0;
}
