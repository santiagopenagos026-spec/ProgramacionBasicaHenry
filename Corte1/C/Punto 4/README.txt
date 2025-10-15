#incluir <stdio.h>

int principal() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    si (num1 > num2) {
        printf("El mayor es: %d\n", num1);
    } de lo contrario si (num2 > num1) {
        printf("El mayor es: %d\n", num2);
    } demás {
        printf("Los dos numeros son iguales\n");
    }

    devuelve 0;
}
