#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "../main/main.h"

#define BUFFER_SIZE 100  // Define the buffer size for input strings

void manipulatingV2(void) {
    printf("*** Start of Comparing Strings Demo ***\n");

    char compare1[BUFFER_SIZE];  // Declare an array for the first string
    char compare2[BUFFER_SIZE];  // Declare an array for the second string
    int result;

    do {
        printf("Type the 1st string to compare (q to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0';  // Remove the newline character

        if (strcmp(compare1, "q") != 0) {
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0';  // Remove the newline character

            result = strcmp(compare1, compare2);

            if (result < 0) {
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            }
            else if (result == 0) {
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            }
            else {
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
            }
        }
    } while (strcmp(compare1, "q") != 0);

    printf("*** End of Comparing Strings Demo ***\n\n");
}