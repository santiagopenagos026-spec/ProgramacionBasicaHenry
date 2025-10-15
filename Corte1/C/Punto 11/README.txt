#include <stdio.h>
#include <string.h>

int main() {
    char clave[20];
    int intentos = 0;

    do {
        printf("Ingrese la contrasena: ");
        scanf("%s", clave);
        intentos++;

        if (strcmp(clave, "1234") == 0) {
            printf("Contrasena correcta\n");
            return 0;
        } else {
            printf("Contrasena incorrecta\n");
        }

    } while (intentos < 3);

    printf("Lo siento, contrasena equivocada\n");

    return 0;
}
