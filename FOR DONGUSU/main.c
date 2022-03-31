#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for(a=4,b=6;a*b<1000000000000;a++,b+=3){
        printf("a degiskeninin su anki degeri:%d\n",a);
        printf("b degiskeninin su anki degeri:\n",b);
        printf("carpim isleminin sonucu:%d\n",a*b);
    }
    return 0;
}
