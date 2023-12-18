#include <stdio.h>

int main() {
    FILE *file = fopen("Hola.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    fclose(file);

    return 0;
}