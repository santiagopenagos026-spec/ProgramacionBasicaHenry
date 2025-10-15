#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0;

    do {
        printf("Ingrese un numero (0 para terminar): ");
        scanf("%d", &num);
        if (num > 0) positivos++;
        else if (num < 0) negativos++;
    } while (num != 0);

    printf("Positivos: %d\nNegativos: %d\n", positivos, negativos);

    return 0;
}
