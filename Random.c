#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    if (random_number < 0) {
        random_number = random_number * -1;
    }
    printf("El valor absoluto es: %d", random_number);

    return 0;

}