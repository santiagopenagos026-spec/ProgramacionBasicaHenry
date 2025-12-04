#include <stdio.h>

int main() {
    int n, i, j;
    int M[50][50];
    int sumaP = 0, sumaI = 0, contP = 0, contI = 0;
    int sumaPosP = 0, sumaPosI = 0, contPosP = 0, contPosI = 0;
    int  mediaP, mediaI, mediaPosP, mediaPosI;

    printf("Digite el tamanio de la matriz NxN: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento %d %d: ", i, j);
            scanf("%d", &M[i][j]);

            if (M[i][j] % 2 == 0) {
                sumaP += M[i][j];
                contP++;
            } else {
                sumaI += M[i][j];
                contI++;
            }

            if ((i + j) % 2 == 0) {
                sumaPosP += M[i][j];
                contPosP++;
            } else {
                sumaPosI += M[i][j];
                contPosI++;
            }
        }
    }

    mediaP = sumaP / contP;
    mediaI = sumaI / contI;
    mediaPosP = sumaPosP / contPosP;
    mediaPosI = sumaPosI / contPosI;

    printf("\nSuma de pares: %d | Media: %d", sumaP, mediaP);
    printf("\nSuma de impares: %d | Media: %d", sumaI, mediaI);
    printf("\nSuma en posiciones pares: %d | Media: %d", sumaPosP, mediaPosP);
    printf("\nSuma en posiciones impares: %d | Media: %d\n", sumaPosI, mediaPosI);

    return 0;
}
