#include <stdio.h>

int main() {
    int f, c, i, j;

    printf("Digite el numero de filas: ");
    scanf("%d", &f);
    printf("Digite el numero de columnas: ");
    scanf("%d", &c);

    int A[f][c], B[f][c], S[f][c];

    printf("\nDigite los elementos de la primera matriz:\n");
    for(i = 0; i < f; i++) {
        for(j = 0; j < c; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite los elementos de la segunda matriz:\n");
    for(i = 0; i < f; i++) {
        for(j = 0; j < c; j++) {
            printf("B %d %d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < f; i++) {
        for(j = 0; j < c; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nLa matriz suma es:\n");
    for(i = 0; i < f; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }

    return 0;
}

