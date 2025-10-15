#include <stdio.h>

int main() {
    int dia, mes;

    printf("Ingrese su dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Ingrese su mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    if (mes == 1)  printf(dia < 20 ? "Capricornio" : "Acuario");
    else if (mes == 2)  printf(dia < 19 ? "Acuario" : "Piscis");
    else if (mes == 3)  printf(dia < 21 ? "Piscis" : "Aries");
    else if (mes == 4)  printf(dia < 20 ? "Aries" : "Tauro");
    else if (mes == 5)  printf(dia < 21 ? "Tauro" : "Geminis");
    else if (mes == 6)  printf(dia < 21 ? "Geminis" : "Cancer");
    else if (mes == 7)  printf(dia < 23 ? "Cancer" : "Leo");
    else if (mes == 8)  printf(dia < 23 ? "Leo" : "Virgo");
    else if (mes == 9)  printf(dia < 23 ? "Virgo" : "Libra");
    else if (mes == 10) printf(dia < 23 ? "Libra" : "Escorpio");
    else if (mes == 11) printf(dia < 22 ? "Escorpio" : "Sagitario");
    else if (mes == 12) printf(dia < 22 ? "Sagitario" : "Capricornio");
    else printf("Mes invalido");

    return 0;
}
