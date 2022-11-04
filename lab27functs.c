/** lab27functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab27functs.h"

void encrypt(char message[], int key) {
    for (int i = 0; i < strlen(message); i++) {
        message[i] = message[i]+key;
    }
}

void decrypt(char message[], int key) {
    for (int i = 0; i < strlen(message); i++) {
        message[i] = message[i]-key;
    }
}

int getNumLines(char fileName[]) {
    FILE* inputFile = NULL;
    int numberLines = 0;
    char line[1000];

    inputFile = fopen(fileName, "r");

    if (inputFile == NULL) {
        printf("Could not open file.\n");
        return -1; // -1 indicates error
    }

    while (!feof(inputFile)) {
        fgets(line, 1000, inputFile);
        numberLines = numberLines + 1;
    }
    
    return numberLines;
}

int readFile(char fileName[], EmployeeBD* EmployeeData, int numberLinesInFile){
    FILE* inputFile = NULL;
    int linesRead = 0;
    
    inputFile = fopen(fileName, "r");
    
    for (int i = 0; i < numberLinesInFile; i++) {
        fscanf(inputFile, "%s%s%s%d", EmployeeData[i].firstName, EmployeeData[i].lastName, EmployeeData[i].birthMonth, &EmployeeData[i].birthDate);
        linesRead = linesRead + 1;
    }

    fclose(inputFile);

    return linesRead;
}

void printBirthdays(EmployeeBD* EmployeeData, int numberItemsInArray, char month[69]) {
    printf("LASTNAME      FIRSTNAME     BIRTHDAY\n");
    printf("*****************************************\n");
    
    for (int i = 0; i < numberItemsInArray; i++) {
        if (strcmp(EmployeeData[i].birthMonth, month) == 0) {
            printf("%-13s %-13s %s %d\n", EmployeeData[i].lastName, EmployeeData[i].firstName, EmployeeData[i].birthMonth, EmployeeData[i].birthDate);
        }
    }
}