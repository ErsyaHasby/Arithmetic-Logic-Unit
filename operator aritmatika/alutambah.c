#include <stdio.h>

int bil1, bil2, hasil;

void tambah(int a, int b, int *h)
{
    int n = 0;

    *h = a;

    // Jika b positif, tambahkan 1 ke hasil sebanyak b kali
    if (b > 0)
    {
        while (n < b)
        {
            *h = *h + 1;
            n = n + 1;
        }
    }
    // Jika b negatif, kurangi 1 dari hasil sebanyak |b| kali
    else
    {
        while (n > b)
        {
            *h = *h - 1;
            n = n - 1;
        }
    }
}

int main()
{
    hasil = 0;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    tambah(bil1, bil2, &hasil);

    printf("Hasil: %d\n", hasil);

    return 0;
}
