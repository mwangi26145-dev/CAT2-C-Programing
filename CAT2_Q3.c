/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Program to store 10 numbers, find sum and average, and display results using files.
*/
#include <stdio.h>
#include <stdlib.h>

void writeInputFile();
void processFile();
void displayFiles();

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}

// Function to prompt user and write integers to input.txt
void writeInputFile() {
    FILE *fptr;
    int num, i;

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }

    fclose(fptr);
    printf("Data successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to output.txt
void processFile() {
    FILE *fptrIn, *fptrOut;
    int num, sum = 0, count = 0;
    float average;

    fptrIn = fopen("input.txt", "r");
    if (fptrIn == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    while (fscanf(fptrIn, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No data found in input.txt!\n");
        fclose(fptrIn);
        exit(1);
    }

    average = (float)sum / count;

    fptrOut = fopen("output.txt", "w");
    if (fptrOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        fclose(fptrIn);
        exit(1);
    }

    fprintf(fptrOut, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(fptrIn);
    fclose(fptrOut);

    printf("Sum and average written to output.txt\n\n");
}

// Function to display both files
void displayFiles() {
    FILE *fptr;
    char ch;

    printf("Contents of input.txt:\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt for display!\n");
        exit(1);
    }
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);

    printf("\nContents of output.txt:\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt for display!\n");
        exit(1);
    }
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);
}


