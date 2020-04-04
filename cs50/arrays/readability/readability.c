# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>

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

    // Calculate L & S
    float L = (float) (100 * letters / words);
    float S = (float) (100 * sentences / words);

    // Calculate Grade level

    printf("Grade: %i\n", gradeRound);
}

