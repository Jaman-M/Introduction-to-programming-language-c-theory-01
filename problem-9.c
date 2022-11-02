#include <stdio.h>

int main()
{
    int i, num;

    /* Input number from user */
    printf("Enter any number to find its factors: ");
    scanf("%d", &num);

    printf("The factors of %d are: \n", num);

    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}
