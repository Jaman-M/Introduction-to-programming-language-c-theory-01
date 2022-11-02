#include<stdio.h>
int main()
{
    long long int n;
    int i = 0;

    printf("Input: ");
    scanf("%lld", &n);

    while(n!=0)
    {
        n = n/10;
        i++;
    }
    printf("%d digits ", i);

    return 0;
}
