/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: K4H2fTNK8CK8
    ID: 2ys1WLLUGdUv
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main(){

    int i, space,num, k = 0, count =0, count1=0;
    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);
    for(i =1; i<=num; i++){
        for(space = 1; space <=num -i; space ++){
            printf("  ");
            ++count;
        }
        while (k != 2 * i -1){
            if(count <= num -1){
                printf("%d", i + k);
                ++count;
            }
            else{
                ++count1;
                printf("%d",( i + k - 2*count1));
     
            }
            k++;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    
    return 0;
}