#include <stdio.h>


void ordenarBurbuja(int *arr, int tamano) {
    int a;
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
            
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

void imprimirArreglo(int *arr, int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 1444, 44, 97, 88};
    int tamano = sizeof(arr) / sizeof(arr[0]); 

    printf("Arreglo original: ");
    imprimirArreglo(arr, tamano);

    ordenarBurbuja(arr, tamano);

    printf("Arreglo ordenado: ");
    imprimirArreglo(arr, tamano);

    return 0;
}
