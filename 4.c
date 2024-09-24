#include <stdio.h>
int main(){
   int num ;
    printf("enter number:");
scanf("%d",&num );
if( (num % 5==0) && (num % 11 ==0))
  printf("divisible");
  else 
   printf("not possible");
}