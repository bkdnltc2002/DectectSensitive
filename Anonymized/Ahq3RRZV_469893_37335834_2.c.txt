#include <stdio.h>

int main(){

    int num, sum=0;

    printf("enter even integer: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("sum of all even integer from 0-%d: ", num);
            for(int i=0; i<=num; i+2){
                sum += i;
            }
        printf("%d", sum);
    }
    else(num%2 != 0);{
        printf("integer is not an even number");
    }
    
    return 0;
}