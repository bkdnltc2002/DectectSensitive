#include <stdio.h>
int main(){
int num ;
printf("please enter the intergers :    ");
scanf("%d", &num);
if(num % 2 > 0){
    printf("error");
}
int count =0; 
int sum=0;
        for( int i=0 ; i<=num ; i+=2){
              sum = sum + i;
        }  
                printf("all even values from 0 to %d is : %d \n",num, sum );
        


return 0 ;
}