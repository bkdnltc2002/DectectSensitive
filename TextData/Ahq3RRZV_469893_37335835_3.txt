#include <stdio.h>

int main(){

    int num;

    printf("enter no. from 1-10: ");
    scanf("%d", &num);

    if(num>=1 && num<=10){
        for(int row=1; row<=num; row++){

            for(int block=1; block<=num-row; block++){
                printf("   ");
            }

            for(int col=num-row+1; col<=num; col++){
                printf("%-3d", col);
            }

            if(row<num){    
                
                for(int block=1; block<=row-2; block++){
                printf("   ");
                }
            
                for(int col=num-row+1; col>=num-row; col--){
                    printf("%-3d", col);
                }
            }
            else(row==num);{
                for(int col=num-1; col>=1; col--){
                    printf("%-3d", col);
                }
            }


            printf("\n");
        }
    }
    else
        printf("invalid no.");

    return 0;
}

