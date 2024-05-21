#include <stdio.h>


int main(){
    int num;
    int val;
    int row;
    printf("enter an interger");
    scanf("%d", &num);
    for (int row =1 ; row <= num; row ++){
        printf("\n");
       for (int block = num - row; block >= 1 ; block --){
        printf ("    ");
       }
       for (int val= num- row +1 ; val <= num; val++ ){
        printf("%4d", val);
       }
       }
    for ( int row =2; row <= num; row ++){
        for (int block= num; block <= num - row ; block ++){
            printf("    ");
            
        }
        printf("%d", row);
        printf("\n");
       }
       

    return 0;
}