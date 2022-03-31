#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s1, s2;
    char islem;
    printf("iki sayi giriniz:");
    scanf("%lf %lf", &s1, &s2);
    printf("lutfen yapmak istediginiz islemi seciniz:(+,-,*,/)");
    scanf(" %c", &islem);

   switch (islem)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", s1, s2, s1+s2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", s1, s2, s1-s2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", s1, s2, s1*s2);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf", s1, s2, s1/s2);
        break;
    default :
        printf("hata! dogru islem secilmedi!");

    }
    return 0;
}

