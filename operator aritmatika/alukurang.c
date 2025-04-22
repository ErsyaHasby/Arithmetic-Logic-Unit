#include <stdio.h>

int bil1, bil2, hasil;

void kurang(int a, int b, int *h)
{
    int n = 0;

    *h = a;

    // Jika b positif, kurangi hasil sebanyak b kali
    if (b > 0)
    {
        while (n < b)
        {
            *h = *h - 1;
            n = n + 1;
        }
    }
    // Jika b negatif, tambah hasil sebanyak |b| kali (karena dikurangi -b = +b)
    else
    {
        while (n > b)
        {
            *h = *h + 1;
            n = n - 1;
        }
    }
}

int main()
{
    hasil = 0;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan yang dikurangkan: ");
    scanf("%d", &bil2);

    kurang(bil1, bil2, &hasil);

    printf("Hasil: %d\n", hasil);

    return 0;
}
