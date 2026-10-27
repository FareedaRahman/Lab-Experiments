#include<stdio.h>
void main() 
{
 int units;
 float bill;
 printf("Enter units:\n");
 scanf("%d",&units);
 
 if(units<=50) 
  {
   bill=units*1.50;
  }
  
 else if (units<=100) 
  {
   bill=units*2.00;
  }
  
 else if(units<=150) 
  {
   bill=units*3.50;
  } 
 else if(units<=500) 
  {
   bill=units*4.00;
  }
 else
  {
   bill=units*6.00;
  }
  
    printf("total Electricity bill:%.2f",bill);
    
}    
    