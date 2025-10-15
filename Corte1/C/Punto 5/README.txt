#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float apuesta;
    int moneda;

    srand(time(NULL));

    printf("Ingrese la cantidad a apostar: ");
    scanf("%f", &apuesta);

    moneda = rand() % 2; // 0 = cruz, 1 = cara

    if (moneda == 1) {
        printf("Salio CARA, ganas el doble!\n");
        printf("Ganancia: %.2f\n", apuesta * 2);
    } else {
        printf("Salio CRUZ, perdiste todo.\n");
    }

    return 0;
}
