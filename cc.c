#include<stdio.h>
#define pi 3.1416 // constant
#define Max 100
int main()
{
    int r;
    printf("Enter the value of r: \n");
    scanf("%d",&r);
    double area = pi*(r*r);
    printf("%lf",area);
}
