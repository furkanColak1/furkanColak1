#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tekSayilar[10]={1,3,5,7,9,11,13,15,17,19};

    int i;
    for(i=0; i<10; i++){
        printf("tekSayilar[%d]=%d\n",i,tekSayilar[i]);
    }
    int toplam=0;
    i=0;

    do{
        toplam+=tekSayilar[i];
        i++;
    }
    while(i<=9);

    printf("dizinin elemanlarinin toplami:%d\n",toplam);
    return 0;

}
