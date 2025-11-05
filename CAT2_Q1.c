/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:2D Array for scores
*/
#include <stdio.h>

int main() {
    // (i) Array data structure Defination
    // An array is a collection of elements of the same data typestored in contiguous memory locations, accessed using indices.

    int i, j; 

    // (ii) Declare and initialize a 2D array named 'scores' with 2 rows and 4 columns
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // (iii) Print the elements of the array using a nested for loop
    printf("The elements of the array are:\n");

    for (i = 0; i < 2; i++) {        
        for (j = 0; j < 4; j++) {    
            printf("%d\t", scores[i][j]);
        }
        printf("\n");                
    }

    return 0;
}
