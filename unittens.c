/* Rewrite the given monolithic program using suitable function*/

#include<stdio.h>

main()
{
    int num,unit,ten;
    printf("enter any integer number\n");
    scanf("%d",&num);
    unit=num%10;
    ten=num/10;
    ten=ten%10;
    printf("Units place of number=%d\n",unit);
     printf("Tens place of number=%d\n",ten);
   
 }    
