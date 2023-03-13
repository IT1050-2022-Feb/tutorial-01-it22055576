/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int x;
  float price;
  printf("enter the dictence that the van has traveled :");
  scanf("%d",&x);
  if(x>30){
   price =30*50.0+(x-30)*40.0;
    printf("the total is:%.2f",price);
  }
    else{
      price=30.0*x;
      printf("the total price is:%.2f",price);
    }
      
  return 0;
}
