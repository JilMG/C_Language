// Find an average mark from a total of three subject marks of a student
#include <stdio.h>

int main()
{
    float s1,s2,s3,avg;
    
    
    
    printf("Enter Maths Marks : ");
    scanf("%f",&s1);
    printf("Enter English Marks : ");
    scanf("%f",&s2);
    printf("Enter Science Marks : ");
    scanf("%f",&s3);
    
    if(s1<0||s2<0||s3<0)
    {
        printf("\nInvalid Marks !!! \nMarks are in Negative");
    }
    else if(s1>100||s2>100||s3>100)
    {
        printf("\nInvalid Marks !!! \nMarks are more than 100");
    }
    else
    {
        avg=(s1+s2+s3)/3;
        printf("\nAverage = %.2f",avg);
    }
    
    return 0;
}