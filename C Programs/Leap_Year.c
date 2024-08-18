#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Year between 2000 to 3000: ");
    scanf("%d",&n);
    
    for(int i=2000;i<=n;i++)
    {
        if(i%4==0&&(i%100!=0||i%400==0))
        {
            printf("%d\t",i);
        }
    }

    return 0;
}