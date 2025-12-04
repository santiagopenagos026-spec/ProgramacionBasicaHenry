#include <stdio.h>

int main() {
    int n, m, i, j;
    int M[50][50];
    int sumaFila[50], sumaCol[50];

    printf("Digite el numero de filas: ");
    scanf("%d", &n);
    printf("Digite el numero de columnas: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Elemento %d %d: ", i, j);
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 0; i < n; i++) sumaFila[i] = 0;
    for (j = 0; j < m; j++) sumaCol[j] = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sumaFila[i] += M[i][j];
            sumaCol[j] += M[i][j];
        }
    }

    printf("\nMatriz con suma de filas:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", M[i][j]);
        }
        printf("| %d n", sumaFila[i]);
    }

    for (j = 0; j < m; j++) {
        printf("\n");
    }
    printf("\n");

    for (j = 0; j < m; j++) {
        printf("%d", sumaCol[j]);
    }
    printf("\n");

    return 0;
}
