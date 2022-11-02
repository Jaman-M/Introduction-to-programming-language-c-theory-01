
#include<stdio.h>

int main ()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d,", n);
    while(n>0)
    {
        if(n%2 == 0)
            printf("%d", n/=2);

        else
        {
            n--;
            if(n!=0)
                printf("%d",n);
        }
        if(n>1)
            printf(",");
    }
    return 0;
}


