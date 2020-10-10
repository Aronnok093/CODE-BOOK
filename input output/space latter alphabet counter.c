#include <stdio.h>
#include<stdlib.h>

int main()
{
    char in_name[80],a[100];
    FILE *in_file;
    int ch, character = 0, line = 0, space = 0, tab = 0,number=0,other=0;
    printf("File Name: \n");
    scanf("%s",in_name);
    printf("Write anything: ");
    scanf("%[^\$]s",&a);

    in_file = fopen(in_name, "wb+");

    fprintf(in_file,"%s",a);

    fclose(in_file);

    in_file = fopen(in_name, "rb+");

    if (in_file== NULL)
        printf("Can't open %s for reading.\n", in_name);
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {   if('a'<=ch&&ch<='z'||'A'<=ch&&ch<='Z')
                character++;
            else if ('0'<=ch&&ch<='9')
                number++;
            else if (ch == ' ')
                space++;
            else if (ch == '\n')
                line++;
            else if (ch == '\t')
                tab++;
            else
                other++;
        }
        fclose(in_file);

        printf("\nNumber of characters = %d", character);
        printf("\nNumber of spaces = %d", space);
        printf("\nNumber of tabs = %d", tab);
        printf("\nNumber of lines = %d", line);
        printf("\nNumber: %d\n",number);
        printf("\special character %d\n",other);
    }
    return 0;
}
