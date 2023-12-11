// MANIPULATING SOURCE

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 // Defines the buffer size
#include "../main/main.h" // Inlcudes the header file for the manipulating function
#include <stdio.h> // Includes the standard output/input library function

void manipulating(void) { //Function to demonstrate string concatanation
    printf("*** Start of Concatenating Strings Demo ***\n"); // Prints the demo start message

    // Define 2 character arrays to  store strings
    char string1[BUFFER_SIZE * 2];
    char string2[BUFFER_SIZE];

    do { // Loops until the user enter "q" to quit
        printf("Type the 1st string (q - to quit):\n"); // Prompts the user to enter the first string

        // Reads input from the user and remove newline character at the end
        fgets(string1, BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0';

        if (strcmp(string1, "q") != 0) { // Check if the user string is not "q"
            printf("Type the 2nd string:\n"); // Prompt the user to enter the second string

            // Reads input from the user and remove newline character at the end
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';

            strcat(string1, string2); // Concatenate the second string to the end of the first string
            printf("Concatenated string is '%s'\n", string1); // Prints the string concatenated
        }
    } while (strcmp(string1, "q") != 0); // Checking if the user entered "q"

    printf("*** End of Concatenating Strings Demo ***\n\n");// Prints the message ending the demo
}