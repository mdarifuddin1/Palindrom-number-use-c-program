#include<stdio.h>
int main (){

   int sum =0, r,num,temp;

   printf("Enter a any number : ");
   scanf("%d",&num);


   temp = num;

   while(temp !=0)
   {
       r = temp %10;
       sum = sum *10+r;
       temp = temp /10;
   }
    if(num==sum)
    {
        printf("The number are palinarom: ",sum);
    }

    else
        printf("The number are not Palinarom");
return 0;
}

