#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//program diatas terdapat 2 perulangan for yaitu variabel i dan j
//perulangan pertama mencakup nilai i dari 2 sampai 3
//perulangan kedua nilai j 1 sampai 2
//setiap kali nilai i dan j sama kali program akan menampilkan hasil kali dari i dan j, nilai i, j sampai i mencapai 3