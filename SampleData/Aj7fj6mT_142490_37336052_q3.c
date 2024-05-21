/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 6kBLuOVyfX7B
    ID: A8eAn992gbHB
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: UmVgGOUBSIAd
*/

#include <stdio.h>

int main(void){
    int num;
    printf ("Type a number (1-10): ");
    scanf ("%d", &num);

  for (int row = 1; row <= num; row++) {
        //Print out blocks of white spaces
        for (int block = 1; block <= num - row; block++) {
            printf("    ");
        }
        for (int col = row; col >= 1; col--){
            printf("%2d ", col);
        }
       //Could not finish in time
    
    printf("\n");
    }
return 0;
}