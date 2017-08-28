#include <stdio.h>
#include <stdlib.h>

int imprimeDec(int dec);

int main() {
    int a;
    printf("Ingrese un n�mero para ver su representaci�n en binario. Ingrese 0 para salir.\n\nDecimal: ");
    scanf("%d", &a);
    while (a != 0) {
        printf("Binario: ");
        imprimeDec(a);
        printf("\n\nDecimal: ");
        scanf("%d", &a);
    }

    return 0;
}


int imprimeDec(int dec) {

    if (dec > 1) {
        imprimeDec(dec / 2);
    }
    printf("%d", dec % 2);
}
