#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tekSayilar[5];
    int i=0;

    while(i<5){
            printf("MERHABA;TEK TAMSAYI GIRERSENIZ SEVINIRIM:\n");
        printf("dizinin %d. elemanini giriniz:\n",i+1);
        scanf("%d", &tekSayilar[i]);
        if(tekSayilar[i]%2==0){
            printf("UYARI:lutfen tek sayi gir dostum!!!\n");
            continue;
        }
        i++;
    }
    printf("---------------------------------------------\n");
    printf("DIZININ ELEMANLARI\n");
    printf("---------------------------------------------\n");

    for(i=0; i<5; i++){
        printf("tekSayilar[%d]=%d\n",i,tekSayilar[i]);
    }
    return 0;
}
