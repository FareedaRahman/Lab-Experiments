     #include<stdio.h>
 
int main ()
{
int n1, n2, n3;
char op;
printf("enter operation: \n");
scanf("%c",&op);
printf("enter 2 values:\n");
scanf("%d%d",&n1,&n2);

switch(op)
{
  case '+':
         printf("%d + %d= %d",n1,n2,n1+n2) ;
         break;
  case '_':
         printf("%d - %d= %d",n1,n2,n1-n2);
         break;
 case '*':
         printf("%d * %d= %d",n1,n2,n1*n2);
         break;
 case '/':
         printf("%d / %d= %f",n1,n2,(float)n1/n2);  
         break;
  case '%':
         printf("%d %% %d= %d",n1,n2,n1 % n2);     
         break;  
   
         default :
         printf("not valid") ;
         
}
}         
         
         