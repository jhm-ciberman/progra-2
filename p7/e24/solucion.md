## TDA N-ario

- Vacio(A)
	Devuelve verdadero si A es �rbol Vac�o.
- Nulo(p)
	Devuelve verdadero si p es la posici�n Nula
- HijoMasIzq(p,A)
	Devuelve la posici�n del hijo m�s a la izquierda de p, si p es hoja devuelve una posici�n nula.
- HermanoDer(p,A)
	Devuelve la posici�n del hermano a la derecha de p (tiene el mismo padre de p), si p es el de la extrema derecha devuelve una posici�n nula.
- Info(p,A)
	Devuelve el dato del en la posici�n p en el �rbol A.
- Raiz(A)
	Devuelve una posici�n que es la ra�z del �rbol A.
- Padre(p,A)
	Devuelve la posici�n del padre de la posici�n p en el �rbol A, si p es la ra�z devuelve una posici�n nula.

## Ejercicios

24. Dado un �rbol N-ario de enteros, desarrollar funciones para:
a) retornar la cantidad de nodos que posee.

```C
int nodos(Arbol a, Posicion p) {
	return Nulo(p) ? 0 : nodos(a, HijoMasIzq(a, p)) + nodos(a, HermanoDer(a, p)) + 1;
}
int main() {
	printf("Numero de nodos: %d", nodos(a, Raiz(a)));
	return 0; 
}
```

b) hallar el porcentaje de claves pares

```C
int pares(Arbol a, Posicion p, int *total, int *pares) {
	if (!Nulo(p)) {
		*total++;
		if (Info(p, a) % 2 == 0)
			*pares++;
			
		pares(a, HijoMasIzq(a, p), total, pares);
		pares(a, HermanoDer(a, p), total, pares);
	}
	return 0;
}

int main() {
	int cont, suma; 
	float prom;
	pares(a, Raiz(a), &cont, &suma);
	prom = suma / cont;
	printf("Pares: %.2f%%", prom);
	return 0; 
}
```

c) retornar su grado

```C
int grado(Arbol a, Posicion p) {
	Posicion c;
	int hijosNum = 0, gradoMax = 0, temp;
	if (!Nulo(p)) {
		c = HijoMasIzq(a, p);
		while (!Nulo(c)) {
			hijosNum++; 
			temp = grado(a, c);
			if (temp > gradoMax) gradoMax = temp;
			c = HermanoDer(a, c);
		}
	}
	return cont > gradoMax ? cont : gradoMax;
}
int main() {
	printf("Grado: %d", grado(a, Raiz(a)));
	return 0; 
}
```

d) hallar la cantidad de nodos de grado impar que hay en niveles impares.

```C
int nodos_grado_impar_en_niveles_pares(Arbol a, Posicion p) {
	Posicion c, d;
	int hijosNum = 0, cont = 0;
	if (!Nulo(p)) {
		c = HijoMasIzq(a, p);
		while (!Nulo(c)) {
			hijosNum++; 
			d = HijoMasIzq(a, c);
			while (!Nulo(d)) {
				cont += nodos_grado_impar_en_niveles_pares(a, d);
				d = HermanoDer(a, d);
			}
			c = HermanoDer(a, c);
		}
		return (hijosNum % 2 == 0) + cont;
	}
	return 0;
}
int main() {
	printf("%d", nodos_grado_impar_en_niveles_pares(a, Raiz(a)));
	return 0; 
}
```

e) verificar si cumple que para todas las claves salvo las de las hojas, su valor num�rico es igual
a la cantidad de hijos. (funci�n int y funci�n void)

```C
int nodo_dato_igual_nro_hijos(Arbol a, Posicion p) {
	Posicion c;
	int hijosNum = 0, cumple = 1;
	if (!Nulo(p)) {
		c = HijoMasIzq(a, p);
		while (!Nulo(c) && cumple) {
			hijosNum++;
			cumple = cumple && nodo_dato_igual_nro_hijos(a, c);
			c = HermanoDer(a, c);
		}
		return cumple && (hijosNum == Info(p, a));
	}
	return 1;
}
int main() {
	printf("%d", nodo_dato_igual_nro_hijos(a, Raiz(a)));
	return 0; 
}
```

```C
void nodo_dato_igual_nro_hijos(Arbol a, Posicion p, int *cumple) {
	Posicion c;
	int hijosNum = 0;
	if (!Nulo(p)) {
		c = HijoMasIzq(a, p);
		while (!Nulo(c) && *cumple) {
			hijosNum++;
			*cumple = *cumple && nodo_dato_igual_nro_hijos(a, c);
			c = HermanoDer(a, c);
		}
		*cumple = *cumple && (hijosNum == Info(p, a));
	}
}
int main() {
	int cumple = 1;
	nodo_dato_igual_nro_hijos(a, Raiz(a), &cumple)
	printf("%d", 1);
	return 0; 
}
```



f) obtener el promedio de las claves del nivel K (dato) 

No s�.