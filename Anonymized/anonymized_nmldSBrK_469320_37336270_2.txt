#include <stdio.h>

int main() {
 int num;
 int sum=0;
 printf("Enter an even interger:");
 scanf("%d", &num);
 if (num % 2 != 0){
    printf("It is not an even interger");
 }if ( num % 2)
 for (int i =1; i <=num; i++){
    if (i % 2  == 0){
        sum = sum + i;
    }
 }
printf ("sum of all even value from 0 to %d is : %d", num, sum );
return 0;
 }

