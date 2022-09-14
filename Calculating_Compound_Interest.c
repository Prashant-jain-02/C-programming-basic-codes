#include<stdio.h>
#include<math.h>

void main()
{
float principle , rate , time , ci  ;

// Getting Values From User

printf("Enter Principle Amount : ");
scanf("%f", &principle);
printf("Enter Rate : ");
scanf("%f", &rate);
printf("Enter Time in years: ");
scanf("%f", &time);

// Calculating Compound Interest

ci = principle * ( pow (( 1 + rate / 100 ) , time));  

printf("Final/Total Amount got : %f ", ci);

}
