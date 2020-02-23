#include <stdio.h>
#include "admission.h"

int main() {
    int choice;
    printf("Welcome to Mwanda High school\n");
    printf("\n------\nPlease choose:\n1. Admit student\n2. Search for a student\n3. List students "
           "in a stream\n4. List students in a house\n5. Update student details\n0. Quit\n");
    scanf("%d", &choice);

    while (choice != 0) {
        // do stuff
        if (choice==1) {
            admissionMenu();
        }

        printf("\n-----\nPlease choose:\n1. Admit student\n2. Search for a student\n3. List students "
               "in a stream\n4. List students in a house\n5. Update student details\n0. Quit\n");
        scanf("%d", &choice);
    }

    printf("Goodbye.");
    return 0;
}
