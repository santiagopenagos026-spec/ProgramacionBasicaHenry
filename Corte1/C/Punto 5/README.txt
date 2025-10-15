#incluir <stdio.h>
#incluir <stdlib.h>
#include <tiempo.h>

int principal() {
    apuesta flotante;
    int moneda;

    srand(tiempo(NULL));

    printf("Ingrese la cantidad a apostar: ");
    scanf("%f", &apuesta);

    moneda = rand() % 2; // 0 = cruz, 1 = cara

    si (moneda == 1) {
        printf("Salio CARA, ganas el doble!\n");
        printf("Ganancia: %.2f\n", apuesta * 2);
    } demás {
        printf("Salio CRUZ, perdiste todo.\n");
    }

    devuelve 0;
}
