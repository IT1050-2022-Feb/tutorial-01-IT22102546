/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int mark1,mark2,avg,sum;

  printf("Enter Marks1:");
  scanf("%d",& mark1);

  printf("Enter Mark2:");
  scanf("%d",& mark2);

  sum= mark1+ mark2;
  avg=sum/2;

  printf("Sum:%d\n",sum);
  printf("Avarage:%d\n",avg);

  return 0;

  
}