#include <stdio.h>
#include <cs50.h>

int main(void)
{

    printf("HOW MANY (16OZ) BOTTLES OF WATER DOES YOUR SHOWER USE???????\n");
    printf("Minutes per shower: ");
    int minutes = get_int();
    
    int ounces = minutes * 192;
    
    int bottles = ounces/16;
    
    printf("bottles: %i\n", bottles);
}
