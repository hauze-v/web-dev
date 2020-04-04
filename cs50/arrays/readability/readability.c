# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(void) {

    // Prompt user for text
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences= 0;

    for (int i = 0; i < strlen(text); i++) {

        // Count letters
        if (isalpha(text[i]))
        {
            letters++;
        }

        // Count words
        if (text[i-1] == 32 && isalpha(text[i])){
            words++;
        }

        // Count sentences
        if(text[i] == 46 || text[i] == 63 || text[i] == 33) {
            sentences++;
        }
    }

    printf("Letters: %i\n", letters);
    printf("Word: %i\n", words);
    printf("Sentences: %i\n", sentences);
}