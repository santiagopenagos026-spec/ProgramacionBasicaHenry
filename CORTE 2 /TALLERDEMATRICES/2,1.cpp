#include <stdio.h>

int main() {
    int n, m, i, j;
    int M[50][50];
    int contPares = 0;

    printf("Digite el numero de filas: ");
    scanf("%d", &n);
    printf("Digite el numero de columnas: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Elemento %d %d: ", i, j);
            scanf("%d", &M[i][j]);
            if (M[i][j] % 2 == 0) {
                contPares++;
            }
        }
    }

    printf("\nLa matriz ingresada es:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nEl numero de valores pares en la matriz es: %d\n", contPares);

    return 0;
}
