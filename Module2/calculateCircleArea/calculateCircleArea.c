#include<stdio.h>
int main()
{
    //calculating circle area from radius
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    float area;
    area = 3.14159*radius*radius;
    printf("The area of the circle is %f", area);
}
