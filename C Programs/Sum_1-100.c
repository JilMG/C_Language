// #include<stdio.h>

// int main()
// {
//     int sum=0;
//     for(int i=1;i<=100;i++)
//     {
//         sum+=i;
//     }
//     printf("Sum = %d",sum);

//     return 0;
// }

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("N = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);

    return 0;
}