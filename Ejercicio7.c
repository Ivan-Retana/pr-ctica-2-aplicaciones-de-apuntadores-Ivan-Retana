#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Imprimir direcciones de memoria de cada elemento del arreglo
    for (int i = 0; i < 5; i++) {
        printf("Direccion de arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
