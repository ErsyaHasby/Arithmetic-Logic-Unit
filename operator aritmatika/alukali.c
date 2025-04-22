#include <stdio.h>

int bil, pengali, hasil;

void kali(int b, int p, int *h) {
    int bp = p;  
    int n;

    if (b == 0 || p == 0) {
        *h = 0;
    } else {
        if (p < 0) {
            p = -p;
        }

        *h = 0;
        n = 0;  

        while (n < p) {
            *h = *h + b;
            n = n + 1;
        }

        if (bp < 0) {
            *h = -*h;
        }
    }
}

int main() {
    hasil = 0;
    
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);
    
    printf("Masukkan pengali: ");
    scanf("%d", &pengali);
    
    kali(bil, pengali, &hasil);
    
    printf("Hasil: %d\n", hasil);
    
    return 0;
}