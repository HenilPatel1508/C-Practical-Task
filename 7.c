#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 1000  

int main() {
    FILE *inputFile, *outputFile;
    char sentence[MAX_LENGTH];

    
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }


    if (fgets(sentence, sizeof(sentence), inputFile) == NULL) {
        perror("Error reading from input file");
        fclose(inputFile);
        return EXIT_FAILURE;
    }


    fclose(inputFile);


    for (int i = 0; sentence[i] != '\0'; i++) {
        sentence[i] = toupper(sentence[i]);
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        return EXIT_FAILURE;
    }


    fprintf(outputFile, "%s", sentence);


    fclose(outputFile);

    printf("Sentence capitalized and written to output.txt\n");

    return EXIT_SUCCESS;
}
