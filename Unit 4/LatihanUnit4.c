#include<stdio.h>

int Keliling(int sisi){
    return 4 * sisi;
}

int Luas(int sisi){
    return sisi * sisi;
}

int VolumeKubus(int sisi){
    return sisi * sisi * sisi;
}

int main(){

    int sisi;
    scanf("%d", &sisi);

    printf("Keliling = %d\n", Keliling(sisi));
    printf("Luas = %d\n", Luas(sisi));
    printf("Volume = %d", VolumeKubus(sisi));

    return 0;
}
