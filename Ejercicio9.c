// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += *(arr + i);  // Acceso usando punteros
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = sumaArreglo(numeros, tamano);
    printf("La suma del arreglo es: %d\n", resultado);

    return 0;
}
