#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int calc_points(string word, int len);
int main(void)
{
    string word1 = get_string("Player 1, enter a word: ");
    string word2 = get_string("Player 2, enter a word: ");

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    int result1 = calc_points(word1,len1);
    int result2 = calc_points(word2,len2);

    if (result1 > result2)
    {
        printf("Player 1 wins!\n");
    }
    else if (result1 < result2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int calc_points(string word, int len)
{
    int i = 0;
    int points = 0;
    char c;

    while (i < len)
    {
        c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 's' || c == 't' || c == 'u')
        {
            points += 1;
        }
        else if (c == 'd' || c == 'g')
        {
            points += 2;
        }
        else if (c == 'b' || c == 'c' || c == 'm' || c == 'p')
        {
            points += 3;
        }
        else if (c == 'f' || c == 'h' || c == 'v' || c == 'w' || c == 'y')
        {
            points += 4;
        }
        else if (c == 'k')
        {
            points += 5;
        }
        else if (c == 'j' || c == 'x')
        {
            points += 8;
        }
        else if (c == 'q' || c == 'z')
        {
            points += 10;
        }
        else
        {
            points += 0;
        }
        i++;
    }
    return points;
}

