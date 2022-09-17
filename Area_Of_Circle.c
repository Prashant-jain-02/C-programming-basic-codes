#include<studio.h>
void main()
{
int radius;
float area;
printf("Enter Radius Of Circle in cm : ");
scanf("%d",&radius);

area = 3.14*radius*radius;

printf("Area Of Circle With Radius %d Was %fcm²",radius,area);
}
