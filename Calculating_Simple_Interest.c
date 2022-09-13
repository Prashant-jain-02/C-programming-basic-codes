include<stdio.h>

void main()
{

float principle , rate , time , si ;

// Getting Values From User

printf("Enter Principle Amount : ");
scanf("%f", &principle);
printf("Enter Rate : ");
scanf("%f", &rate);
printf("Enter Time in years: ");
scanf("%f", &time);

// Calculating Simple Interest

si = ( principle*rate*time )/100;

printf("Simple Interest was %f",si);

}
