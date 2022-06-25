#include<stdio.h>
int main()
{
    float number;
    printf("enter a real number\n");
    scanf("%f",&number);
    if(number>0)
    {
        printf("given no. is positive");
    }
    else if(number<0)
    {
        printf("entered no. is negative");
    }
    else
    {
        printf("no. is zero");
    }
}