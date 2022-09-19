#include <stdio.h>


void main() {
    // Declaring a file
    FILE *fp;
    
    // Opening a file
    fp = fopen("Student_Details.txt", "w");

    fclose(fp);
    
}