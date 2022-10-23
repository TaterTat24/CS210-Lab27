/** lab27-1.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include "lab27functs.h"

int main(void) {

    char message[100];
    int  key = 0;

    printf("Enter a message to encrypt/decrypt: ");
    scanf("%[^\n]", message);

    printf("Enter a key (an integer): ");
    scanf("%d", &key);

    encrypt(message, key);
    printf("The encrypted message is: %s\n", message);

    decrypt(message, key);
    printf("The decrypted message is: %s\n", message);
    
    return 0;
}

