#include <stdio.h>

int main(){
     int n;
    int jumlahangka = 0;

     printf("Masukkan jumlah array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Masukkan angka: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        jumlah+=arr[i];
    }
    
    printf("%d", jumlahangka);
    return 0;
}