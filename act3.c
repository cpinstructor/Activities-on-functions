/*Activity 3: Identify the following in the given program:
Function prototype, Function definition, Function return
Function call, Called function, Calling function, Parameters 
/ Arguments.*/

#include <stdio.h>

double largest(int x, int y, int z);

int main()
{
  int a,b,c; 

  scanf(“%d %d %d”,&a,&b,&c);
    printf(“Largest is : %d“,
                   largest(a,b,c));
}

 
int  largest(int x, int y, int z)

 { 
   int max = a;

   if ( y > max) max = y;
   if ( z > max) max = z;
   return max;
 }
