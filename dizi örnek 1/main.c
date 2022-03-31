#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[5]={0,0,0,0,0};

    sayilar[0]=19;
    sayilar[1]=23;
    sayilar[3]=sayilar[1]-192;
    sayilar[4]=2*sayilar[1]-4;

    printf("-------------------------------\n");
    printf("sayi dizisinin elemanlari\n");
    printf("-------------------------------\n");

    printf("%d\n",sayilar[0]);
    printf("%d\n",sayilar[1]);
    printf("%d\n",sayilar[2]);
    printf("%d\n",sayilar[3]);
    printf("%d\n",sayilar[4]);

    return 0;

}
