  1 #include "main.h"
  2 /**
  3  * stack_l_octal_arr - ouputs long octal
  4  * @binry: storage for array in binary.
  5  * @oct: stored array
  6  *
  7  * Return: array binary.
  8  */
  9 char *stack_l_octal_arr(char *binry, char *oct)
 10 {
 11         int w, x, y, elem_oct, max;
 12 
 13         oct[22] = '\0';
 14         for (x = 63, elem_oct = 21; x >= 0; x--, elem_oct--)
 15         {
 16                 if (x > 0)
 17                         max = 4;
 18                 else
 19                         max = 1;
 20                 for (w = 0, y = 1; y <= max; y *= 2, x--)
 21                         w = ((binry[x] - '0') * y) + w;
 22                 x++;
 23                 oct[elem_oct] = w + '0';
 24         }
 25         return (oct);
 26 }
