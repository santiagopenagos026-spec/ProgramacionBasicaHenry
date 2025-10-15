#include <stdio.h>

int main() {
    float nota;

    printf("Ingrese la nota del examen (0 a 10): ");
    scanf("%f", &nota);

    if (nota < 5)
        printf("Suspenso");
    else if (nota >= 5 && nota < 7)
        printf("Aprobado");
    else if (nota >= 7 && nota < 9)
        printf("Notable");
    else if (nota >= 9 && nota < 10)
        printf("Sobresaliente");
    else if (nota == 10)
        printf("Matricula de honor");
    else
        printf("Nota invalida");

    return 0;
}
