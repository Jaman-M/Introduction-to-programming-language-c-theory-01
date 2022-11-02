#include<stdio.h>
int main(){
     int num, i;
     printf("Enter a number you want to check:");
    scanf("%d", &num);
for (i = 2; i < num; i++)
{
if(num % i == 0)
{
     printf("Composite", num);
        return 0;
}
}
printf("prime\n", num);
}
