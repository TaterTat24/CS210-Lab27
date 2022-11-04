/** lab27-3.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>
#include "lab27functs.h"

int main(void) {
    char fileName[69];
    char month[69];
    int numberLinesInFile;

    printf("Enter a filename: ");
    scanf("%s", fileName);

    numberLinesInFile = getNumLines(fileName);
    
    EmployeeBD* EmployeeData = (EmployeeBD*)malloc(sizeof(EmployeeBD)*numberLinesInFile);

    readFile(fileName, EmployeeData, numberLinesInFile);

    printf("Enter a month: ");
    scanf("%s", month);

    printBirthdays(EmployeeData, numberLinesInFile, month);

    return 0;
}