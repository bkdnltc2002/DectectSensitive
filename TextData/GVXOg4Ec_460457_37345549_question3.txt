/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: j3zHUDvq6FNc
    ID: tS4r7mThGwnV
    Compiler used: jnj84mv799Vq
    Created  date: eBRyLRdgmUT9
    References: shXjlAQ6oOtS
*/
#include <stdio.h>
int main () {
 int num;
 printf ("Enter a number (1-10): ");
 scanf ("%d", &num);
 for (int row = 1; row <= num; row++)
 {
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


 }

    return 0;
}