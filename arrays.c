#include <stdio.h> 
int main (){
    int x[]={10,222,33,44};
    int i;
    x[0] = 33;
    printf("%d\n",x[1]);
    for (i = 0; i < 4; i++) {
  printf("%d\n", x[i]);
 }
}
