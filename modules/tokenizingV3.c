// Disable secure-related warnings
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for input sentences
#define BUFFER_SIZE 300

// Include necessary header files
#include <stdio.h>
#include "../main/main.h"

// Function to tokenize and display sentences
void tokenizingV3(void) {
    // V3
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char  sentences[BUFFER_SIZE];
    char* nextSentence = NULL;
    int   sentencesCounter;
    do {
        printf("Type a few sentences separated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';
        if ((strcmp(sentences, "q") != 0)) {
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;
            while (nextSentence) {
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }
    } while (strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}