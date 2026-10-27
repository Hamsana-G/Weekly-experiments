#include<stdio.h>
#include<math.h>
void main()
{
  float num;
  printf("\nEnter the number:");
  scanf("%f",&num);
  if(num>0)
    printf("\nSquare root of %f is %f",num,sqrt(num));
  else
    printf("\nInvalid num,sqroot of negative number is not real");
}      