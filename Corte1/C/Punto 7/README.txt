#incluir <stdio.h>

int principal() {
    nota flotante;

    printf("Ingrese la nota del examen (0 a 10): ");
    scanf("%f", ¬a);

    si (nota < 5)
        printf("Suspenso");
    de lo contrario si (nota >= 5 && nota < 7)
        printf("Aprobado");
    de lo contrario si (nota >= 7 && nota < 9)
        printf("Notable");
    de lo contrario si (nota >= 9 y nota < 10)
        printf("Sobresaliente");
    de lo contrario si (nota == 10)
        printf("Matrícula de honor");
    demás
        printf("Nota inválida");

    devuelve 0;
}
