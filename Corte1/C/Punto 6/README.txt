#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Ingrese tres valores enteros: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("El valor maximo es: %d\n", max);
    printf("El valor minimo es: %d\n", min);

    return 0;
}
