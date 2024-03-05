#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

//perulangan while dengan variabel i dan j
//nilai i dari 2 sampai 3 nilai j dari 1 sampai 2
//setiap nilai i dan j sama kali, program menampilkan hasil kali j dan i, nilai i dan j sampai i mencapai 3