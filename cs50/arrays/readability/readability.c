# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(void) {

    string text = get_string("Text: ");

    // Count letters
    int letters = 0;
    for (int i = 0; i < strlen(text); i++) {
        // Check if letter and add if so
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    // Count words
    int words = 1;
    for (int i=0; i < strlen(text); i++) {
        if (text[i-1] == 32 && isalpha(text[i])){
            words++;
        }
    }
    
    printf("Letters: %i\n", letters);
    printf("Word: %i\n", words);
}