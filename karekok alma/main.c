#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    do{
        printf("lutfen karekokunu merak ettiginiz sayiyi giriniz\n");
        printf("programdan sikilirsan 0'a bas dostum:\n");

        scanf("%d", &sayi);
        double depo= sqrt((double) sayi);
        printf("-----------------------------------------------------\n");
        printf("Girilen Deger:%d\n", sayi);
        printf("karekoku:%.2f\n", depo);
        printf("-----------------------------------------------------\n");

    }
    while(sayi!=0);
    printf("Programdan Cikiliyor!!!\n");
    return 0;
}
