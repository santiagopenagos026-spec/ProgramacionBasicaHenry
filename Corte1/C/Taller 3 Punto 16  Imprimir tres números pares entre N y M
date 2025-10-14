#include <stdio.h>

int main() {
    int N, M, i, contador = 0;

    printf("Ingrese N: ");
    scanf("%d", &N);
    printf("Ingrese M: ");
    scanf("%d", &M);

    if (N > M) {
        printf("El primer numero debe ser menor que el segundo\n");
        return 0;
    }

    printf("Numeros pares entre %d y %d:\n", N, M);
    for (i = N; i <= M; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contador++;
        }
    }

    if (contador == 0)
        printf("\nNo hay numeros pares entre los valores ingresados\n");

    return 0;
}
