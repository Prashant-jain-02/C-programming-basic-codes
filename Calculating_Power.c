#include<stdio.h>
#include<math.h>

void main()
{

int base , exp , ans;
printf("Enter Base Value : ");
scanf("%d",&base);
printf("Enter Exponent/Power : ");
scanf("%d",&exp);

// Calculates Power
ans = pow(base,exp);

printf("Answer was %d",ans);

}
