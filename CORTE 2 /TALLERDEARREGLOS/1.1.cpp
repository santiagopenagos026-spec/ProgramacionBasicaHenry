#include <stdio.h>
int main() {
    int n, i;
    int suma = 0, promedio;

    printf("Digite el tamano del vector: ");
    scanf("%d", &n);

    int V[n];

    for(i = 0; i < n; i++) {
        printf("Digite el elemento %d: ", i + 1);
        scanf("%d", &V[i]);
    }

    for(i = 0; i < n; i++) {
        suma = suma + V[i];
    }

    promedio = suma / n;

    printf("\nLa suma del vector es: %d", suma);
    printf("\nEl promedio del vector es: %d", promedio);

    return 0;
}
