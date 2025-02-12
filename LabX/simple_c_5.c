#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


 void Add(int *a, int *b, int *c, int *sum){
 
  *sum = *a + *b + *c;
  
 } 


 int main(){
 
  int a,b,c,sum;
 
   printf("provide 3 integers, to add them!");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
    
   Add(&a, &b, &c, &sum);
   
   printf("the sum is %d\n", sum);
   
   return 0;

}