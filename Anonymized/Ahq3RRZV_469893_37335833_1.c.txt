#include <stdio.h>

int main(){

    float arr[3];

    printf("enter 3 float numbers\n");

    for(int i=0; i<3; i++){
        printf("float number[%d]: ", i+1);
        scanf("%f", arr[i]);
    }

    int count;
    if(arr[0]==arr[1]+arr[2] || (arr[1]==arr[0]+arr[2]) || arr[2]==arr[1]+arr[2])
        count=1;
    
    printf("3 float numbers: ");
    for(int i=0; i<3; i++){
        printf("%f ", arr[i]);
    }
    
    if(count == 1)
        printf("a number is the sum of the others: Yes");
    else
        printf("a number is the sum of the others: No");
    
    return 0;
}