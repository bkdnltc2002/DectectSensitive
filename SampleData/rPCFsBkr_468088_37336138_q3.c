/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: N8uTAYewYqra
    ID: NOYqBw224zvT
    Compiler used: zN5XyhidVF9f 
    Created  date: JdtgbsuWhNNg
    References: UmVgGOUBSIAd
*/
#include <stdio.h>
int main (){
    int num;
    while (1) { 
        printf("Enter a number (1-10): ");
        scanf("%d", &num);
        
        if (num < 1 || num > 10) {
            printf("Invalid value. Please enter again. "); // invalid error
        } else {
            break; 
        }
    }
    
       for (int row = 1; row <= num; row++) {
        /* for each row */
        //Print out blocks of white spaces
        for (int block = 1; block <= num - row; block++) {
            printf("    ");
        }
        
        for (int col = row; col >= 1; col--) {
            printf("%2d  ", col);
        }
         
        for (int col = 2; col <= row; col++) {
            printf("%2d  ", col);
        }
        
        printf("\n"); 
    return 0;
}
}
    
