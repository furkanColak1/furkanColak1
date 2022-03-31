#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float bakiye=9876543210;
    float cekilecek;
    printf("merhaba\nCekilecek para miktarini giriniz:\n");
    scanf("%f", &cekilecek);

    printf("su anki bakiyeniz:%f\n",bakiye);
    if(cekilecek<=bakiye)
    {
        bakiye=bakiye-cekilecek;
        printf("cekilen para miktari:%f\n",cekilecek);
        printf("kalan para miktari:%f\n",bakiye);
    }
    else
    {
        printf("yeterli bakiye yok!!!\n");
    }
    printf("program sonlandi.TESEKKURLER!!!\n");
    return 0;
}
