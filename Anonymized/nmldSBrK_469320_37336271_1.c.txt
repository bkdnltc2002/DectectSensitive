#include <stdio.h>

int main(){
   float num1, num2, num3;
   printf("Enter three float numbers:");
   scanf("%f %f %f", &num1, &num2, &num3);
   if (num1 == num2 + num3)
   {
    printf("YES");
   }
   else if (num2 == num1 + num3 )
   {
    printf("YES");
   }
   else if( num3 == num1 + num2)
   {
    printf("YES");
   }
   else{ printf("NO");}
    return 0;

}