#include <stdio.h>

int main(){
     int JumlahTransaksi, NominalTransaksi;
    int TotalPengeluaran = 0;
    
     printf("Masukkan jumlah transaksi : ");
    scanf("%d", &JumlahTransaksi);
    
    if(JumlahTransaksi<=0){
        printf("Tidak ada transaksi hari ini");
    } else {
        
        for(int i=0; i<JumlahTransaksi; i++){
           scanf("%d", &NominalTransaksi); 
           TotalPengeluaran += NominalTransaksi;
         
        } 
    
        printf("Total pengeluaran hari ini : %d", TotalPengeluaran);
    }
    
    return 0;
}
    