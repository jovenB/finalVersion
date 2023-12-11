// Disable secure-related warnings
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for input strings
#define BUFFER_SIZE 80

// Define maximum number of input attempts
#define NUM_INPUT_SIZE 10

// Include necessary header files
#include <stdio.h>
#include "../main/main.h"

// Function to measure and display string lengths
void fundamentalsV3(void) {
    printf("* **Start of Copying Strings Demo * **\n");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];
    do {
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0';
        if (strcmp(source, "q") != 0) {
            strcpy(destination, source);
            printf("New destination string: %s\n", destination);
        }
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying Strings Demo ***\n\n");
}