#include "main.h"
char *_strchr(char *s, char c)
{
       int i;

       for (i = 0; s[i] != '\0'; i++)
       {
               if (s[i] == c)
               {
                       return (&s[i]);
               }
       }
       if (c == '\0')
               return (s);
       return (NULL);
}
