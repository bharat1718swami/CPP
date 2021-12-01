#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three real numbers\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>=b&a>=c)
    {
        printf("%f is greatest",a);
    }
    else if(b>=a&b>=c)
    {
        printf("%f is grestest no.",b);
    }
    else
    {
        printf("%f is greatest",c);
    }
}