#incluir <stdio.h>

int principal() {
    char nombre[30];
    float horas, valorHora, bruto, retencion, neto;

    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);

    printf("Ingrese horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el valor por hora: ");
    scanf("%f", &valorHora);

    bruto = horas * valorHora;
    retención = bruto * 0.05;
    neto = bruto - retencion;

    printf("\nTrabajador: %s\n", nombre);
    printf("Sueldo bruto: %.2f\n", bruto);
    printf("Retencion (5%%): %.2f\n", retencion);
    printf("Sueldo neto: %.2f\n", neto);

    devuelve 0;
}
