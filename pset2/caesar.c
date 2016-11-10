#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)  //asks user for "./caesar" and "any nonnegative integer" thus two arguments.
    {
        int k = atoi(argv[1]);  //converts the original string (which is a number) to an actual integer
        
        
        string p = get_string();    //requests a string from the user
        
        
        if (p != NULL) 
        {
            
            for (int i = 0, n = strlen(p); i < n; i++)  //iterates over the string given by user one char at a time
                {
                    if (islower(p[i]))  //if character is a lowercase letter
                    {
                        printf("%c", ((p[i] - 97 + k)%26 + 97));    //convert user plaintext character to alphabet index then to cipher text  
                    }
            
                    else if (isupper(p[i]))  //if character is an uppercase letter
                    {
                        printf("%c", ((p[i] - 65 + k)%26 + 65));    //convert user plaintext character to alphabet index then to cipher text  
                    }
                    
                    else  //preserves all other characters
                    {
                        printf("%c", p[i]);
                    }
                }
            printf("\n");
        }
    }
    else    //if user gives incorrect arguments in command-line, then print ERROR...
    {
        printf("ERROR incorrect number of command-line arguments\n"); 
        return 1;
    }
}