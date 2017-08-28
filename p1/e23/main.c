#include <stdio.h>
#include <stdlib.h>


/*
23. Rehacer el ejercicio 12 suponiendo que los n�meros se encuentran en un archivo de texto,
todos en la misma l�nea. �Como modificar�a la lectura, si hubiera un valor por l�nea?


RESPUESTA: No lo cambiaria de ninguna forma. Ya que la funci�n fscanf con el formato "%d" lee
un n�mero entero hasta que encuentre un caracter en blanco (saltos de linea, retornos de carro, espacios, tabulaciones) y
consume estos caracteres. Devuelve 1 en caso de �xito, y 0 en caso de haber algun error en la lectura (la lectura no cumpl�a
con el formato especificado)

*/
int main()
{
    int n, suma = 0, result;
    FILE* f;
    f = fopen("numeros.txt", "rt");
    if (f == NULL) {
        printf("Error abriendo archivo");
        return 1;
    } else {
        result = fscanf(f, "%d", &n);
        while (n != 0 && result && !feof(f)) {
            suma += n;
            result = fscanf(f, "%d", &n);
        }
        fclose(f);

        printf("La suma es: %d", suma); //Deber�a ser 147

        return 0;
    }
}
