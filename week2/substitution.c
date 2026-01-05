#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    // Part 1: Getting + Validating Key (Input).
    bool proceed = true;
    if (argc == 2)
    {
        // Running checks to validate key.
        string key = argv[1];
        int len = strlen(key);
        bool isAlpha = true;
        bool isCopy = false;

        // Alphabetical characters check.
        char c;
        for (int i = 0; i < len; i++)
        {
            c = key[i];
            if (isalpha(c) == false)
            {
                isAlpha = false;
            }
        }

        // Duplicate characters check.
        int value = 0;
        char c_upper;
        for (int i = 0; i < len; i++)
        {
            c = key[i];
            c_upper = toupper(c);
            value += c_upper;
        }

        const int ALPHABET_SUM = 2015;
        if (value != ALPHABET_SUM)
        {
            isCopy = true;
        }

        // Outputs considering check results.
        if (len < 26)
        {
            printf("Key must contain 26 characters.\n");
            proceed = false;
            return 1;
        }
        else if (isAlpha == false)
        {
            printf("Key must contain alphabetical characters only.\n");
            proceed = false;
            return 1;
        }
        else if (isCopy == true)
        {
            printf("Key must not contain repeated characters.\n");
            proceed = false;
            return 1;
        }
    }
    else if (argc == 1 || argc == 0)
    {
        printf("./substitution KEY\n");
        proceed = false;
        return 1;
    }
    else
    {
        printf("./substitution KEY (1 argument only!)\n");
        proceed = false;
        return 1;
    }

    // Part 2: Getting plaintext + Converting to ciphertext.
    string key = argv[1];
    int len = strlen(key);

    string text = get_string("plaintext: ");

    int text_len = strlen(text);
    char c;
    char d;
    char ciphertext[text_len];
    int counter = 0;
    const int UPPERCASE_OFFSET = 65;
    const int LOWERCASE_OFFSET = 97;
    for (int i = 0; i < text_len; i++)
    {
        c = text[i];
        if (isupper(c))
        {
            for (int j = 0; j < len; j++)
            {
                d = key[j];
                if (c == j + UPPERCASE_OFFSET)
                {
                    ciphertext[counter] = toupper(d);
                    break;
                }
            }
        }
        else if (islower(c))
        {
            for (int j = 0; j < len; j++)
            {
                d = key[j];
                if (c == j + LOWERCASE_OFFSET)
                {
                    ciphertext[counter] = tolower(d);
                    break;
                }
            }
        }
        else
        {
            ciphertext[counter] = c;
        }
        counter++;
    }

    // Part 3: Printing Ciphertext (output).
    printf("ciphertext: ");

    for (int i = 0; i < text_len; i++)
    {
        printf("%c",ciphertext[i]);
    }
    printf("\n");
    return 0;
}
