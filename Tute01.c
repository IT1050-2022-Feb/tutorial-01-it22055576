/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int n1,n2;
   float x;
   printf("enter number 1:");
   scanf("%d",&n1);
   printf("enter number 2:");
   scanf("%d",&n2);
   x=(n1+n2)/2.0;
   printf("the avg is :%.2f",x);
   
  
  return 0;
}

