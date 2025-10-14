#include <stdio.h>

int main() {
    int num, contador = 0;
    float suma = 0;

    do {
        printf("Ingrese un numero (negativo para terminar): ");
        scanf("%d", &num);
        if (num >= 0) {
            suma += num;
            contador++;
        }
    } while (num >= 0);

    if (contador > 0)
        printf("Promedio = %.2f\n", suma / contador);
    else
        printf("No se ingresaron numeros positivos\n");

    return 0;
}
