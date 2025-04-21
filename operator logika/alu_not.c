#include <stdio.h>

int bil, hasil;

void logika_not(int a, int *h)
{
    *h = ~a;
}

int main()
{
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    logika_not(bil, &hasil);

    printf("Hasil NOT: %d\n", hasil);

    return 0;
}
