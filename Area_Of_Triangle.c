//     AREA OF TRIANGLE

#include<stdio.h>
#include<math.h>
void main()

{

float a, b, c, s, area;
printf("\n<---TO CALCULATE AREA OF TRIANGLE --->\n\n");

printf("Write 1st Side Of Triangle , a :");
scanf("%f",&a);
printf("Write 2nd Side Of Triangle , b :");
scanf("%f",&b);
printf("Write 3rd Side Of Triangle , c :");
scanf("%f",&c);

s = (a+b+c)/2;

area = sqrt(s*(s-a)*(s-b)*(s-c));

printf("Area Of Given ,Triangle Was %.2f cm³ ",area);

}
