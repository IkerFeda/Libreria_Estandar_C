#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}