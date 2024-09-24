#include <stdio.h>
int main()
{
    int c,s, amt; 
    printf("Enter cost price: ");
    scanf("%d", &c);
    printf("Enter selling price: ");
    scanf("%d", &s);  
    if(s > c)
    {
        amt = s - c;
        printf("Profit = %d", amt);
    }
    else if(c > s)
    {
        amt = c - s;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }
    return 0;
}