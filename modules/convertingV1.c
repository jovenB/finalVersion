// CONVERTING MODULE SOURCES
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "../main/main.h"
#include <stdio.h>

// V1
void converting(void) {
    printf("*** Start of Converting Strings to Int Demo ***\n");

    // Declare variables
    char intString[BUFFER_SIZE];
    int intNumber;

    do {
        // Prompt user for input
        printf("Type an integer string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);

        // Remove trailing newline character
        intString[strlen(intString) - 1] = '\0';

        // Check if user wants to quit
        if (strcmp(intString, "q") != 0) {
            // Convert string to integer and display the result
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);

    printf("*** End of Converting Strings to Int Demo ***\n\n");
}