#include <stdio.h>
int main() {
   int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num > 0)
    {
         if (num%2==0)
        printf("It is even");         
           else
           printf("It is odd");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }   
    return 0;
}