#include <stdio.h>

int bil1, bil2, hasil;

void logika_xor(int a, int b, int *h)
{
    *h = a ^ b;
}

int main()
{
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    logika_xor(bil1, bil2, &hasil);

    printf("Hasil XOR: %d\n", hasil);

    return 0;
}
