#include <stdio.h>
int main()
{
    int x,y;

    printf("Enter the first number ");
    scanf("%d",&x);

    printf("Enter the second number: ");
    scanf("%d",&y);

    if(x%3==0 || y%3==0)
    {
        printf("The second number is divisible by the first number: \n");
    }
    else{
        printf("None of them are divisible by the other.  \n");
    }
    return 0;
}

