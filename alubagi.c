#include <stdio.h>

int bil, pembagi, hasil, sisa;

void bagi(int b, int p, int *h, int *mod) {
    int bp, pp;
    int count = 0;

    if (p == 0) {
        printf("Hasil: undefined (pembagian dengan 0 tidak diperbolehkan)\n");
        *h = 0;
        *mod = 0;
    } else {
        // Menentukan nilai absolut dari bilangan dan pembagi
        if (b < 0) {
            bp = -b;
        } else {
            bp = b;
        }

        if (p < 0) {
            pp = -p;
        } else {
            pp = p;
        }

        *h = 0;
        *mod = bp;

        // Menghitung hasil bagi dengan pengurangan berulang
        while (*mod >= pp) {
            *mod = *mod - pp;
            count = count + 1;
        }

        *h = count;

        // Menentukan tanda hasil akhir
        if ((b < 0 && p > 0) || (b > 0 && p < 0)) {
            *h = -*h;   // Jika hanya salah satu negatif, hasil bagi negatif
        }

        // Jika bilangan negatif, sisa juga harus negatif
        if (b < 0) {
            *mod = -*mod;
        }
    }
}

int main() {
    hasil = 0;
    sisa = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    printf("Masukkan pembagi: ");
    scanf("%d", &pembagi);

    bagi(bil, pembagi, &hasil, &sisa);

    if (pengali != 0) {
        printf("Hasil bagi: %d\n", hasil);
        printf("Sisa: %d\n", sisa);
    }

    return 0;
}