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
    float index = (0.0588 * L) - (0.296 * S) - 15.8;
    int grade = round(index);


    if (grade < 1) {
        printf("Before grade 1\n");
    } else if (grade > 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade: %i\n", grade);
    }
}

