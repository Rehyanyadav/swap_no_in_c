//wap in c to swap two variables using third variable
#include<stdio.h>
int main()
{
    int num1 , num2 ,temp;

    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
 temp = num1;
 num1= num2;
 num2= temp;

 printf("after swapping num1 is :%d\n",num1);
  printf("after swapping num2 is :%d",num2);

 
    
    

    return 0;
}