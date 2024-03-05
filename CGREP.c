#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE* datoteka;
    char linija[1000];

    datoteka = fopen(argv[2], "r");
    if (datoteka == NULL) {
        printf("Datoteka ne postoji\n");
    }
    else {
        //pretrazivanje teksta
        while (fgets(linija, 1000, datoteka) != NULL) {
            char* pointer = strstr(linija, argv[1]);
            if (pointer != NULL) {
                printf(linija);
            }
        }
        fclose(datoteka);
    }
    return 0;
}
