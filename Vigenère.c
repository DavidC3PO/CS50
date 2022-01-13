#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }

    string k = argv[1];
    int kLen = strlen(k);

    do
    {
        string p = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, j = 0, n = strlen(p); i < n; i++)

        {
            int letterKey = tolower(k[j % kLen]) - 97;

            if (islower(p[i]))
            {
                printf("%c", 97 + (p[i] - 97 + letterKey) % 26);
                j++;
                //printf("%c", (((p[i] + k) - 97) % 26) + 97);
                //printf("%c", 'a' + (p[i] - 'a' + letterKey) % 26);

            }
            else if (isupper(p[i]))
            {
                printf("%c", 65 + (p[i] - 65 + letterKey) % 65);
                j++;
                //printf("%c", (((p[i] + k) - 65) % 26) + 65);
                //printf("%c", 'A' + (p[i] - 'A' + letterKey) % 26);
            }
            else
            {
                printf("%c", p[i]);
            }

        }
        printf("\n");
        return 1;
    }
    while (argc == 2);
}
