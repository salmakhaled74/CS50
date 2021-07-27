#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    //check if height is not less than 1 or greater than 8
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // print the rows
    for (int i = 0; i < n; i++)
    {
        // print the spaces
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        //print the hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
