#include <stdio.h>


void main() {
    char name[50];
    int i, marks, num;

    printf("Enter the number of students:");
    scanf("%d", num);
    // Declaring a file
    FILE *fp;

    // Opening a file
    fp = fopen("Student_Details.txt", "w");

    if(fp == NULL) {
        printf("Error!");
    }

    for (i=0; i<num; i++) {
        printf("Enter name for student %d\n",i);
        scanf("%c", name);
        printf("Enter mark for student %d",i);
        scanf("%d",marks);

        fprintf(fp,"\nName: %s \nMarks=%d \n", name, marks);
    }
       
    
    

    fclose(fp);
    
}