#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int c = 0, i, constant = 0;
    int space = 0;
    printf("\nEnter your string: ");
    gets(ch);
    printf("\nyour string is: \n");
    puts(ch);

    for (i = 0; ch[i] != '\0'; i++)
    {
        // if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        // {
        //     c = c + 1;
        // }

        // else if( ch[i] == space)
        // {
        //     printf(" ");
        // }
        // else{
        //     constant = constant + 1;
        // }
       switch(ch[i])

       {
     case 'a':
     case 'A':
     case 'e':
     case 'E':
     case 'i':
     case 'I':
     case 'o':
     case 'O':
     case 'u':
     case 'U':
      c=c+1;
      break;

      case ' ':
      if(space= ' ')
      {
        printf(" ");
      }
      printf("");
      space++;
      break;
      default:
     constant++;
      
     


     



     



       }

    }

    printf("\nNumber of vowels in string is: %d", c);
    printf("\nNumber of constant in string is: %d", constant);
    return 0;
}