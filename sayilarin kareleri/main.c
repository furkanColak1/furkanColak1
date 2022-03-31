#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi,sayac=0;
   printf("bu program girdiginiz sayiya kadar");
   printf(" olan tum sayilarin karelerini gösterir\n");
   printf("-----------------------------------------------------------------------------\n");
   scanf("%d", &sayi);

   while(sayi>=sayac){
    printf("girdiginiz sayi:%d ve sayinin karesi:%d\n", sayac,sayac*sayac);
    sayac++;
   }
   printf("ne kadar da zekiyim degil mi!\n");
   return 0;
   }
