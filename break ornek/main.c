#include <stdio.h>
#include <stdlib.h>

int main()
{   int a;
    for(a = 1; a <= 78 ; a++) {
        if(a==23||a==24){
        continue;
        }
        printf("%d\n",a);
    }


}
