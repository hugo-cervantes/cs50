#include <cs50.h>
#include <stdio.h>

void rows(int h);
int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h <= 0 || h > 8);

    rows(h);
}

void rows(int h)
{
    int counter = 0;
    int space;
    int hashes;
    int hashes2;

    while (h > 0)
    {
        space = h-1;
        hashes = 1 + counter;
        hashes2 = 1 + counter;

        while (space > 0)
        {
            printf(" ");
            space--;
        }

        while (hashes > 0)
        {
            printf("#");
            hashes--;
        }

        printf("  ");

        while (hashes2 > 0)
        {
            printf("#");
            hashes2--;
        }

    printf("\n");
    counter++;
    h--;
    }

}
