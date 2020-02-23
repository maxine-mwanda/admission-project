//
// Created by maxine on 2/20/2020.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct Student{
    char fullName[50];
    int age;
    char gender;
    char eyeColor[50];
    bool isDisabled;
    char disabilities[50];
};


void admissionMenu (){
    struct Student newStudent;
    char disabilityChoice;
    char temp;

    printf("Please enter student details\n");
    printf("\nFull name: ");
    scanf("%c", &temp);
    scanf("%[^\n]", newStudent.fullName);
    printf("Age: ");
    scanf("%d", &newStudent.age);
    printf("Gender (m/f): ");
    scanf(" %c", &newStudent.gender);
    printf("Eye color: ");
    scanf("%c", &temp);
    scanf("%[^\n]", newStudent.eyeColor);
    printf("Any disabilities (y/n): ");
    scanf(" %c", &disabilityChoice);
    if (disabilityChoice=='y'){
        newStudent.isDisabled=true;
        printf("Type of disability: ");
        scanf("%c", &temp);
        scanf("%[^\n]", newStudent.disabilities);
    } else{
        newStudent.isDisabled=false;
    }

    // save the details
    printf("\n\nYou entered this data : \nName : [%s]\nAge : [%d]\nGender : [%c]\nEye color : [%s]\n", newStudent.fullName, newStudent.age,
            newStudent.gender, newStudent.eyeColor);
    if (newStudent.isDisabled){
        printf("Disabilities : [%s]\n", newStudent.disabilities);
    }

    /*
     * opening a file
     * fopen(filename, mode);
     * modes
     *      w   - write text file
     *      r   - read text file
     *      wb  - write binary file
     *      rb  - read binary file
     *      wa, wba -> append
     */

    FILE *studentFile;
    studentFile = fopen("student.txt", "wa");
    fwrite(&newStudent, sizeof(newStudent), 1, studentFile);
    fclose(studentFile);


    printf("\n--------\n");

}