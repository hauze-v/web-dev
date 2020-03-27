#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int height;
    // prompts user for pyramid height between 1 and 23
    do
    {
        height = get_int("Please specify the height of the pyramid: ");
    }
    while (height < 1 || height > 8);

    // Out loop says perform inside code on each line (row)
    for (int line = 0; line < height; line++)
    {
        // Prints spaces on left
        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }

        // Print left hashes
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right hashes
        for (int hashes = 0; hashes < line + 1; hashes++){
            printf("#");
        }
        printf("\n");
    }
}
