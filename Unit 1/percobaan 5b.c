#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//Program pertama menggunakan scanf("%s", fullname); yang akan  membaca satu buah kata 
//sedangkan program kedua menggunakan fgets(fullname, sizeof(fullname), stdin); fgets membaca keseluruhan baris, termasuk spasi, dan menyimpannya dalam variabel fullname