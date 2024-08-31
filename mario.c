#include "cs50.h"
#include <stdio.h>

void print_space(int second_length);
void print_row(int length);

int main(void)
{
    int height = get_int("Height: ");
    // creating loop that will warn if user put invalid input
    do
    {
        if (height > 8)
        {
            printf("Your number are too high please type again\n");
            height = get_int("Height: ");

            if (height <= 8 && height > 0)

            {
                for (int i = 1; i <= height; i++)
                {
                    print_space(height - i);
                    print_row(i);
                    print_space(2);
                    print_row(i);
                    printf("\n");
                }
            }
        }
        else if (height <= 0)
        {
            printf("minus number or 0 is wrong please type again\n");
            height = get_int("Height: ");

            if (height <= 8 && height > 0)
            {
                for (int i = 1; i <= height; i++)
                {
                    print_space(height - i);
                    print_row(i);
                    print_space(2);
                    print_row(i);
                    printf("\n");
                }
            }
        }
        else
        {
            for (int i = 1; i <= height; i++)
            {
                print_space(height - i);
                print_row(i);
                print_space(2);
                print_row(i);
                printf("\n");
            }
        }
    } while (height > 8 || height <= 0);
}

void print_row(int length)
{
    // print # according to user input
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
}

void print_space(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf(" ");
    }
}
