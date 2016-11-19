#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>



int main(int argc, string argv[])
{
    
    if (argc == 1)    //if user gives incorrect arguments in command-line, then print ERROR...
    {
        printf("ERROR incorrect number of command-line arguments 1\n"); 
        return 1;
    }
    
    if (argc == 2)    //if user gives incorrect arguments in command-line, then print ERROR...
    {
        printf("ERROR incorrect number of command-line arguments 2\n"); 
        return 2;
    }
    if (argc == 3)    //if user gives incorrect arguments in command-line, then print ERROR...
    {
        printf("ERROR incorrect number of command-line arguments 3\n"); 
        return 3;
    }
 
    if (argc == 4)
    {
     FILE* file = fopen("records.txt", "a");
            if (file == NULL)
            {
                return 3;
            }
        printf("What is your name: ");
        string name = get_string();
        
        printf("What is date today: ");
        string date = get_string();
        
        
        printf("How many hours did you run: ");
        int h = atoi(argv[1]);
        
        printf("How many minutes did you run: ");
        int m = atoi(argv[2]);
        
        printf("How many seconds did you run: ");
        int s = atoi(argv[3]);
        
        printf("\nSo your total time ran is %ihr:%imin:%isec\n", h, m, s);
        int hs = h*3600;
        int ms = m*60;
        int total = (hs + ms + s);
        printf("\nDid you run miles(mi) or kilometers(km)?:  ");
        
        string unit = get_string();
        
        if (strcmp(unit, "mi") == 0 | strcmp(unit, "miles") == 0)
        {
            printf("\nHow many miles did you run?: ");
            float distance = get_float();
            int counter = 0;
            float convert = total/(distance*60);
            float temp = convert;
            do
            {
                convert = convert - 1;
                counter++;
            }
            while (convert >= 1);
            convert = convert/0.01666;
            printf("\n%s, You averaged a %imin:%.0fsec mile\n\n", name, counter, convert);
            fprintf(file, "%s\nTOTAL TIME: %ihr:%imin:%isec\nAVERAGED: %imin:%.0fsec mile for %.2f miles\n\n", date, h, m, s, counter, convert, distance);
            
            if (temp > 11 && distance <= 4)
            {
                printf("UNBELIEVEABLE, ARE YOU A HUMAN OR A SNAIL?? I CAN'T EVEN LOOK AT YOU.\n");
            }
            
            else if (temp > 9.5 && temp < 11 && distance <= 4)
            {
                printf("PICK UP THE PACE SLOWPOKE!!!!!\n");
            }
            
            else if (temp > 8 && temp < 9 && distance <= 4)
            {
                printf("NICE, YOU BROKE THE 9 MINUTE MILE!!!!!\n");
            }
            else if (temp > 9 && temp < 10 && distance >= 5)
            {
                printf("NICE, YOU BROKE THE 10 MINUTE MARK!!!!!\n");
            }
            else if (temp > 6  && temp < 7 && distance >= 1)
            {
                printf("YOU ARE RIDICULOUS; I DON'T KNOW IF THE SPEED OF LIGHT IS 3.00 x 10^8 m/s or %s's MILE TIME!!!!!!\n", name);
            }
            
            else if (temp < 8 && temp > 7 && distance > 1)
            {
                printf("YOU BROKE THE 8 MINUTE MARK, NICE!!\n");
            }
            
            if (temp < 6 && distance > 6)
            {
                printf("YOU ARE EITHER FROM KENYA OR ETHIOPIA, PUT ON SOME WEIGHT WILL YA\n");
            }
            else
            {
                printf("YOU FINISHED\n");
            }
           
            
        }
        if (strcmp(unit, "km") == 0 | strcmp(unit, "kilometers") == 0) 
        {
            printf("How many kilometers did you run?: ");
            float distance = get_float();
            distance = distance*0.62;
            int counter = 0;
            float convert = total/(distance*60);
            float temp = convert;
            do
            {
                convert = convert - 1;
                counter++;
            }
            while (convert >= 1);
            convert = convert/0.01666;
            printf("\n%s, You averaged a %imin:%.0fsec mile\n\n", name, counter, convert);
            fprintf(file, "%s\nTOTAL TIME: %ihr:%imin:%isec\nAVERAGED: %imin:%.0fsec mile for %.2f miles\n\n", date, h, m, s, counter, convert, distance);
            if (temp > 11 && distance <= 3)
            {
                printf("UNBELIEVEABLE, ARE YOU A HUMAN OR A SNAIL?? I CAN'T EVEN LOOK AT YOU.\n");
            }
            
            else if (temp > 9.5 && temp < 11 && distance <= 4)
            {
                printf("PICK UP THE PACE SLOWPOKE!!!!!\n");
            }
            else if (temp > 9 && temp < 10 && distance >= 5)
            {
                printf("NICE, YOU BROKE THE 10 MINUTE MARK!!!!!\n");
            }
            
            else if (temp > 8 && temp < 9 && distance <= 4)
            {
                printf("NICE, YOU BROKE THE 9 MINUTE MILE!!!!!\n");
            }  
            else if (temp < 7 && distance < 13 && distance >= 1)
            {
                printf("YOU ARE RIDICULOUS; I DON'T KNOW IF THE SPEED OF LIGHT IS 3.00 x 10^8 m/s  OR %s'S MILE TIME!!!!!!\n", name);
            }
            
            else if (temp < 8 && temp > 7 && distance > 1)
            {
                printf("YOU BROKE THE 8 MINUTE MARK, NICE!!\n");
            }
            
            else
            {
                printf("YOU FINISHED\n");
            }
           
        }
        
        fclose(file);
    
    }
    
    
}