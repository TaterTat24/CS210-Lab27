/** lab27functs.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Programming Assessment 2 Practice
* ===========================================================  */

#ifndef LAB27FUNCTS_H
#define LAB27FUNCTS_H

typedef struct EmployeeBD_Struct {
    char firstName[30];
    char lastName[30];
    char birthMonth[15];
    int birthDate;
} EmployeeBD;

void encrypt(char message[], int key);

void decrypt(char message[], int key);

int getNumLines(char fileName[]);

int readFile(char fileName[], EmployeeBD* EmployeeData, int numberLinesInFile);

void printBirthdays(EmployeeBD* EmployeeData, int numberItemsInArray, char month[69]);

#endif 