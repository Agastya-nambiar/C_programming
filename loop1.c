#include <stdio.h>
int main() {
  int i=1,num,sum=0;
  printf("Enter a number:");
  scanf("%d",&num );
  while (i <=num) {
    sum=sum+i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}