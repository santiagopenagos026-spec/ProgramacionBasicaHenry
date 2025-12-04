#include <stdio.h>

int main() {
    int vector1[5], vector2[5], suma[5];
    int i;

    printf("Ingrese los elementos del primer vector:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("\nIngrese los elementos del segundo vector:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    for (i = 0; i < 5; i++) {
        suma[i] = vector1[i] + vector2[i];
    }
    
    printf("\nEl vector suma es:\n");
    for (i = 0; i < 5; i++) {
        printf("Suma[%d] = %d\n", i + 1, suma[i]);
    }

    return 0;
}
