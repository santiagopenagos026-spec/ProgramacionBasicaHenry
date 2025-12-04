#include <stdio.h>

int main() {
    int n, i, num;

    printf("Digite el tamano del vector: ");
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++) {
        printf("Ingrese un numero par para la posicion [%d]: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            v[i] = num;
        } else {
            printf("El numero no es par, vuelva a intentarlo:\n");
            i--; 
        }
    }

    printf("\nNumeros pares almacenados en el vector:\n");
    for (i = 0; i < n; i++) {
        printf("Posicion [%d] = %d\n", i, v[i]);
    }

    return 0;
}
