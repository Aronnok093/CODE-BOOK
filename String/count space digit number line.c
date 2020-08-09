#include <stdio.h>
void main()
{
      char str [81];
      int nletter, ndigit, nspace, nother; /* char counts */
      int i,newline=0;
      system("cls");
      printf("Enter a line of text:\n");
      scanf("%[^\$]s",&str);
      /* count characters in string str */
      nletter = ndigit = nspace = nother = 0; /* init counts */
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
              nletter++;
              else if (ch>= '0' && ch<= '9')
                       ndigit++;
              else if (ch == ' ' || ch == '\t')
                       nspace++;
              else if(ch =='\n')
                    newline++;
              else nother++;
                       i++;
          }
              /* print counts */
              printf("Letters: %d \tWhite spaces : %d", nletter, nspace);
              printf(" Digits : %d \tOther chars : %d\tNew Line : %d\n", ndigit, nother,newline);
              getch();
              }
