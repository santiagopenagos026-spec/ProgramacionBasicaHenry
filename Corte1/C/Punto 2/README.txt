#incluir <stdio.h>

int principal() {
    producto char[30];
    precio flotante, total;
    int unidades;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto);

    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precio);

    printf("Ingrese el numero de unidades: ");
    scanf("%d", &unidades);

    total = precio * unidades;

    printf("\nProducto: %s\n", producto);
    printf("Unidades: %d\n", unidades);
    printf("Precio total: %.2f\n", total);

    devuelve 0;
}
