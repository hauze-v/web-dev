# include <cs50.h>
# include <stdio.h>
# include <string.h>

int main(void) {

    string text = get_string("Text: ");

    int letters = 0;

    // Count letters
    for (int i = 0; i < strlen(text); i++) {

        // Check if letter (ASCII)
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            letters++;
        }
    }

    // Count words
    int words = 0;

    printf("%i\n", letters);
}