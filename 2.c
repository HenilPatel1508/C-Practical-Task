#include <stdio.h>
#include <ctype.h> 
void countVowels(char sentence[], int vowelCount[]) {
    int i = 0;
    
   
    vowelCount[0] = vowelCount[1] = vowelCount[2] = vowelCount[3] = vowelCount[4] = 0;

    
    while (sentence[i] != '\0') {
        char ch = tolower(sentence[i]); 
        switch (ch) {
            case 'a': vowelCount[0]++; break;
            case 'e': vowelCount[1]++; break;
            case 'i': vowelCount[2]++; break;
            case 'o': vowelCount[3]++; break;
            case 'u': vowelCount[4]++; break;
        }
        i++;
    }
}

int main() {
    char sentence[200];
    int vowelCount[5]; 
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    
    countVowels(sentence, vowelCount);

    
    printf("Occurrences of vowels:\n");
    printf("a: %d\n", vowelCount[0]);
    printf("e: %d\n", vowelCount[1]);
    printf("i: %d\n", vowelCount[2]);
    printf("o: %d\n", vowelCount[3]);
    printf("u: %d\n", vowelCount[4]);

    return 0;
}
