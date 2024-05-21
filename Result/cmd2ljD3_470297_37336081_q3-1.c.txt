#include <stdio.h>

int main() {
    //Input a number (1-15)
    int num;
    printf("Please type in number");
    scanf("%d", &num);
    
    //Print out the pyramid
    for (int row = 1; row <= num; row++) {
        /* for each row */
        //Print out blocks of white spaces
        for (int block = 1; block <= num - row; block++) {
            printf("    ");
        }
        
        //Print out numbers in descending order
        for (int col = num; col >= 1; col--) {
            printf("%2d  ", col);
        }
        
        
        
        printf("\n"); //newline to go to next row
    }
    
    return 0;
}