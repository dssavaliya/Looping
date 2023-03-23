#include<stdio.h>
int main()
{

    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    while(n>=1)
    {
        if(n % 2 == 0)
    printf("%d\n",n);
    n--;
    }

    return 0;
}