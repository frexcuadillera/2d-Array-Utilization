#include <stdlib.h>
#include<stdio.h>

int main(void)
{
    int i = 0;
    for(i = 0; i <= 100; i+= 10)
    {
        int j;
        for(j = 0; j <= i/10; j++)
            printf("=");

        printf("%d\n",i);
        sleep(1);
        system("@cls||clear");
    }
}

