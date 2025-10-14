#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, intento, contador = 0;

    srand(time(NULL));
    numero = rand() % 10 + 1;

    do {
        printf("Adivine el numero (1-10): ");
        scanf("%d", &intento);
        contador++;
        if (intento != numero) printf("Intente de nuevo\n");
    } while (intento != numero);

    printf("Correcto! Lo adivinaste en %d intentos\n", contador);

    return 0;
}
