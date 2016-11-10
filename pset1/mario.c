#include <stdio.h>
#include <cs50.h>

int height;


int main(void)
{
    do 
    {
        printf("height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);
    
    int i, j, k; 
    for (i = 0; i < height; i++)
        {
            for (j = 0; j < (height - (i + 1)); j++)
                {
                    printf(" ");
                }
            for (k = height; (k - i) < (height + 2); k++)
                {
                    printf("#");
                }
                printf("\n");
        }
}