#include <stdio.h>
#include <stdlib.h>

int kitap_kac_gunde_bitecek(int sayfa_sayisi) {
    int day = 1, gunluk = 10, toplam_okunan = 0;
    while (toplam_okunan < sayfa_sayisi) {
        day++;
        toplam_okunan += gunluk;
        gunluk += 5;
    }
    return day;
}


int main() {
    
    printf("Furkan will finish the novel in %d days\n", kitap_kac_gunde_bitecek(1000));
  
    return 0;
}

