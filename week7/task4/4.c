#include <stdio.h>

#define ENGLISH
// #define FRENCH
// #define SPANISH
int main() {
    #ifdef ENGLISH
        printf("Insert Disk 1\n");
    #elif defined(FRENCH)
        printf("Inserez Le Disque 1\n");
    #elif defined(SPANISH)
        printf("Inserte El Disco 1\n");
    #else
        printf("Language not specified\n");
    #endif
    return 0;
}