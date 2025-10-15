#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    float lado, base, altura, radio;
    char continuar;

    do {
        printf("\n--- Calculo de area y perimetro ---\n");
        printf("1. Cuadrado\n2. Rectangulo\n3. Triangulo\n4. Circulo\n");
        printf("Elija una figura: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese el lado del cuadrado: ");
                scanf("%f", &lado);
                printf("Area = %.2f\n", lado * lado);
                printf("Perimetro = %.2f\n", 4 * lado);
                break;
            case 2:
                printf("Ingrese base y altura del rectangulo: ");
                scanf("%f %f", &base, &altura);
                printf("Area = %.2f\n", base * altura);
                printf("Perimetro = %.2f\n", 2 * (base + altura));
                break;
            case 3:
                printf("Ingrese base y altura del triangulo: ");
                scanf("%f %f", &base, &altura);
                printf("Area = %.2f\n", (base * altura) / 2);
                break;
            case 4:
                printf("Ingrese el radio del circulo: ");
                scanf("%f", &radio);
                printf("Area = %.2f\n", M_PI * radio * radio);
                printf("Perimetro = %.2f\n", 2 * M_PI * radio);
                break;
            default:
                printf("Opcion invalida\n");
        }

        printf("\nDesea calcular otra figura? (s/n): ");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');

    return 0;
}

