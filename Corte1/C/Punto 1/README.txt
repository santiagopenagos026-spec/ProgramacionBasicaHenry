#incluir <stdio.h>
#include <math.h>

int principal() {
    int opción;
    flotador lado, base, altura, radio;
    char continuar;

    hacer {
        printf("\n--- Cálculo de área y perimetro ---\n");
        printf("1. Cuadrado\n2. Rectángulo\n3. Triángulo\n4. Circulo\n");
        printf("Elija una figura: ");
        scanf("%d", &opcion);

        switch(opcion) {
            caso 1:
                printf("Ingrese el lado del cuadrado: ");
                scanf("%f", &lado);
                printf("Área = %.2f\n", lado * lado);
                printf("Perímetro = %.2f\n", 4 * lado);
                romper;
            caso 2:
                printf("Ingrese base y altura del rectangulo: ");
                scanf("%f %f", &base, &altura);
                printf("Área = %.2f\n", base * altura);
                printf("Perimetro = %.2f\n", 2 * (base + altura));
                romper;
            caso 3:
                printf("Ingrese base y altura del triangulo: ");
                scanf("%f %f", &base, &altura);
                printf("Área = %.2f\n", (base * altura) / 2);
                romper;
            caso 4:
                printf("Ingrese la radio del círculo: ");
                scanf("%f", &radio);
                printf("Área = %.2f\n", M_PI * radio * radio);
                printf("Perimetro = %.2f\n", 2 * M_PI * radio);
                romper;
            por defecto:
                printf("Opción invalida\n");
        }

        printf("\n¿Desea calcular otra figura? (s/n): ");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');

    devuelve 0;
}
