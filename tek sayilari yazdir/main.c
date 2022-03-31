#include <stdio.h>
#include <stdlib.h>

int main()
{  int sayi=0;
int i;
    printf("Lutfen Bir Sayi Giriniz:\n");
    scanf("%d", &sayi);

    for(i = 1;sayi>=i; i+=2) {
        printf("%d\n", i);
    }
    printf("PROGRAMDAN CIKILIYOR!\n");
    return 0;
}
