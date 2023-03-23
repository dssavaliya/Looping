#include<stdio.h>
int main()
{

    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    int i=1;
    int sum=0;
    while(i<=n)
    {
    sum += i;
    i++;
    }
    printf("Sum = %d\n",sum);

    return 0;
}