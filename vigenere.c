#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{  
    // ends the program if user entered non compliant data
    if (argc != 2)
    {
        printf("please uprovide one keyword after the program name\n");
        return 1;
    }
    // loops if statement to check for noncompliant data   
    for (int a = 0, q = strlen(argv[1]); a < q; a++) 
    {  
        if (!isalpha(argv[1][a]))
        {  
            printf("please use only alphabetical characters for key\n");
            return 1;
        }
    }
    // prompts user for intput
    string p = GetString();
        // cycles through plaintext one letter at a time while cycling and repeating through key
       for (int  i = 0, j = 0, n = strlen(p); i < n; j = 0)
       { 
            for (int l = strlen(argv[1]); i < n && j < l; j++, i++)
            {
                // scales ascii back to 0, performs math, then scales it back up
                int c;
                int k;
                if (isupper(argv[1][j]))
                {
                    k = argv[1][j] - 'A';
                }
                else if (islower(argv[1][j]))
                {
                    k = argv[1][j] - 'a';
                }
                if (isupper(p[i]))
                {
                    c = (p[i] - 'A' + k) % 26 + 'A';
                    printf("%c", c);
                }
                else if (islower(p[i]))
                {
                    c = (p[i] - 'a' + k) % 26 + 'a';
                    printf("%c", c);
                }
                else
                {
                    printf("%c", p[i]);
                    j--;
                }
            }
        }
    printf("\n");
    return 0;   
}
