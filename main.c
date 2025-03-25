#include <stdio.h>
#include "stack.h"

int main() {
    
    int desimal;
    char lanjut;
    do
    {
        printf("Masukan bilangan desimal: ");
        scanf("%d", &desimal);
        KonversiBiner(desimal);

        printf("Lanjut konversi? (y/n): ");
        scanf(" %c", &lanjut);
        getchar();
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}