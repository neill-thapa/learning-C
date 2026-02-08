// store names inputted by the user and print them in uppercase
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 50
#define TOTAL_NAMES 3

int main(void)
{
    FILE *fp = fopen("names.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    int n = 3;
    char names[TOTAL_NAMES][MAX];

    // take input
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Name %d?: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // remove the newline
    }

    // write to the file
    for (int i = 0; i < TOTAL_NAMES; i++)
    {
        fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp); // close file after writing

    fp = fopen("names.txt", "r"); // reopen the file in reading mode  
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Name in uppercase:\n");
    char buffer[MAX];
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0'; // remove the newline

        // convert to uppercase
        for (int i = 0; buffer[i]; i++)
        {
            buffer[i] = toupper(buffer[i]);
        }

        // count words
        int words = 0, inWord = 0;
        for (int i = 0; buffer[i]; i++)
        {
            if (buffer[i] != ' ' && !inWord)
            {
                inWord = 1;
                words++;
            }
            else if (buffer[i] == ' ')
            {
                inWord = 0;
            }
        }

        // print name + word count
        printf("%s, Word Count: %d\n", buffer, words);
    }

    fclose(fp);

    return 0;
}