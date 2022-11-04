/** lab27-2.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>

int main(void) {
    FILE* outFile = NULL;
    int multiples;
    int multiplier;
    char fileName[69];

    printf("Enter integer representing the value we want to generate the table for: ");
    scanf("%d", &multiples);

    printf("integer representing the /""end/"" of the multiplication table: ");
    scanf("%d", &multiplier);

    printf("Enter name of the file you wish to print the multiplication table to: ");
    scanf("%s", fileName);

    outFile = fopen(fileName, "w");

    if (outFile == NULL) {
        printf("Could not open file myoutfile.txt.\n");
        return -1; // -1 indicates error
    }

    for (int i = 0; i <= multiplier; i++) {
        fprintf(outFile, "%d * %d = %d\n", multiples, i, multiples*i);
    }

    fclose(outFile);

    return 0;
}