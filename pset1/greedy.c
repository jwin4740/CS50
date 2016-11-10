#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float c;
        do
        {
             printf("change: $ ");
             c = get_float();
        }
        while (c < 0); /* c is your change in dollar form */
        float v;
        v = 100*c;
        int balance = round(v);
        int a;
        int count = 0;
        int q = 25;
        int d = 10;
        int n = 5;
        int p =1;
        
        while (balance >= q)
            {
                a = balance/q;
                count = count + a;
                balance = balance - (q*a);
            }
            
        while (balance >= d)
            {
                a = balance/d;
                count = count + a;
                balance = balance - (d*a);
            }
        while (balance >= n)
            {
                a = balance/n;
                count = count + a;
                balance = balance - (n*a);
            }
        while (balance >= p)
            {
                a = balance/p;
                count = count + a;
                balance = balance - (p*a);
            }    
        printf("%i\n", count);
}