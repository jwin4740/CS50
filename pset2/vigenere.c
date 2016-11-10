#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)    //if user gives incorrect arguments in command-line, then print ERROR...
    {
        printf("ERROR incorrect number of command-line arguments\n"); 
        return 1;
    }
    
    if (argc == 2)  //asks user for "./caesar" and "any nonnegative integer" thus two arguments.
    {
        string krot = argv[1];
        for (int k = 0, o = strlen(krot); k < o; k++)
        {
            if (krot[k] <= 64)
            {
                printf("ERROR contains non alpha character\n");
                return 1;
            }
        }
        
        
        string p = get_string();    //requests a string from the user
       
        if (p != NULL) 
        {
            for (int i = 0, n = strlen(p), m = strlen(krot); i < n; i++)  //iterates over the string given by user one char at a time
                {   
                    if (islower(krot[i]))
                    {
                        krot[i] = (krot[i] - 97);
                    }
                        
                    if (isupper(krot[i]))
                    {
                        krot[i] = (krot[i] - 65);
                    }
                        {
                            if (islower(p[i]))  //if character is a lowercase letter
                            {
                                printf("%c", ((p[i] - 97 + (krot[i%m]))%26 + 97));    //convert user plaintext character to alphabet index then to cipher text  
                            }
                            
                            else if (isupper(p[i]))  //if character is a capital letter
                            {
                                printf("%c", ((p[i] - 65 + (krot[i%m]))%26 + 65));    //convert user plaintext character to alphabet index then to cipher text  
                            }
                        
                            else   //preserves all other characters
                            {
                                printf("%c", p[i]);
                            }
                        }
                }
            printf("\n");
        }
    }
}