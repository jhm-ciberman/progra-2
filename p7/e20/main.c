#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

/**
20. Dado un �rbol binario que proviene de la transformaci�n de un �rbol general, obtener la altura
del �rbol original

*/

typedef char ArbolDato;

typedef struct ArbolNodo {
    ArbolDato dato;
    struct ArbolNodo* izq;
    struct ArbolNodo* der;
} ArbolNodo;

typedef ArbolNodo* Arbol;

void arbol_inserta(Arbol *arbol, ArbolDato dato) {
    if (!*arbol) {
        *arbol = (Arbol) malloc(sizeof(ArbolNodo));
        (*arbol)->dato = dato;
        (*arbol)->izq = NULL;
        (*arbol)->der = NULL;
    } else if (dato < (*arbol)->dato) {
        arbol_inserta(&((*arbol)->izq), dato);
    } else if (dato > (*arbol)->dato) {
        arbol_inserta(&((*arbol)->der), dato);
    }
}

int arbol_altura(Arbol arbol) {
    int izq, der;
    if (arbol) {
        izq = arbol_altura(arbol->izq) + 1;
        der = arbol_altura(arbol->der);
        return (izq > der ? izq : der);
    }
    return 0;
}

int main()
{
    Arbol a = NULL;

    // REFERENCIA: https://www.programacion.com.py/wp-content/uploads/2013/04/a71.jpg
    arbol_inserta(&a, 'P');
    arbol_inserta(&a, 'F');
    arbol_inserta(&a, 'S');
    arbol_inserta(&a, 'B');
    arbol_inserta(&a, 'H');
    arbol_inserta(&a, 'R');
    arbol_inserta(&a, 'Y');
    arbol_inserta(&a, 'G');
    arbol_inserta(&a, 'T');
    arbol_inserta(&a, 'Z');
    arbol_inserta(&a, 'W');

    assert(arbol_altura(NULL) == 0);
    assert(arbol_altura(a) == 3);
    assert(arbol_altura(a->der) == 2);
    assert(arbol_altura(a->der->der) == 2);
    assert(arbol_altura(a->der->der->der) == 1);


    printf("Todos los tests pasaron");

    return 0;
}
