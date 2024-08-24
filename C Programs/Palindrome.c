
#include <stdio.h>

int main()
{
    int n,b,rev=0,a;
    printf("N = ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        b=n%10;
        rev=rev*10+b;
        n=n/10;
    }
    if(a==rev)
    {
        printf("\nPalindrome No.\n");
    }
    else
    {
        printf("\nNot Palindrome No.\n");
    }

    return 0;
}