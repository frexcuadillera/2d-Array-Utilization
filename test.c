#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>





main()
{
    char str[100];
    int num;
    while(1) {
        printf("Enter a number: ");
        scanf("%[^0-9]%d",str,&num);
        printf("You entered the number %d\n",num);
    }
    return 0;
}
