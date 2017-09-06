#ifndef DUPLA_H_INCLUDED
#define DUPLA_H_INCLUDED

typedef struct TDupla {
    int a, b;
} TDupla;

/**
 * Crea una nueva dupla
 */
TDupla crear(int primero, int segundo);

/**
 * \brief Obtiene el primer valor de la dupla
 */
int primero(TDupla d);

/**
 * \brief Obtiene el segundo valor de la dupla
 */
int segundo(TDupla d);

/**
 * \brief Genera una nueva dupla que es el resultado de multiplicar ambos elementos por el n�mero m�ltiplo que se pasa como par�metro.
 */
TDupla multiplicar(TDupla d, int multiplo);

/**
 * \brief Genera una nueva dupla resultado de sumarle el par�metro adici�n a ambos elementos.
 */
TDupla adicionar(TDupla d, int adicion);

/**
 * \brief Genera una nueva dupla resultado de la suma de las dos recibidas como par�metro.
 */
TDupla sumar(TDupla a, TDupla b);

/**
 * \brief Genera una nueva dupla resultado de la resta de las dos recibidas como par�metro.
 */
TDupla restar(TDupla a, TDupla b);

#endif // DUPLA_H_INCLUDED
