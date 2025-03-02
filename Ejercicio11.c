// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamano, int valor) {
    for (int i = 0; i < tamano; i++) {
        if (*(arr + i) == valor) {
            return (arr + i);  
        }
    }
    return NULL;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(arr) / sizeof(arr[0]);
    int valor = 30; 

    int *direccion = buscarElemento(arr, tamano, valor);

    if (direccion != NULL) {
        printf("Elemento %d en la dirección: %p\n", valor, direccion);
    } else {
        printf("Elemento %d no encontrado en el arreglo.\n", valor);
    }

    return 0;
}
