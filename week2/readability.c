#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int len = strlen(text);

    char c;
    float letters = 0;
    float words = 1;
    float sentences = 0;

    for (int i = 0; i < len; i++)
    {
        c = text[i];

        if (isalpha(c))
        {
            letters+=1;
        }
        else if (c == ' ')
        {
            words+=1;
        }
        else if (c == '.' || c == '!' || c == '?')
        {
            sentences+=1;
        }
    }

    float avg_letters = (letters/words)*100;
    float avg_sentences = (sentences/words)*100;
    float index = 0.0588*avg_letters-0.296*avg_sentences-15.8;
    int index_rounded = round(index);

    if (index_rounded > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index_rounded < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i",index_rounded);
        printf("\n");
    }
}
