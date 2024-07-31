/*
	--------
	|	|
	|5*5=25 |
	|	|
	--------
*/

#include <stdio.h>

int main()
{
    int n=5,sqr;
    
    sqr=n*n;
    
    printf("--------");
    printf("\n|\t|");
    printf("\n|%d*%d=%d |",n,n,sqr);
    printf("\n|\t|");
    printf("\n--------");

    return 0;
}