 #include "main.h"
 
/**
  * stack_l_octal_arr - ouputs long octal
  * @binry: storage for array in binary.
  * @oct: stored array
  *
  * Return: array binary.
  */
  char *stack_l_octal_arr(char *binry, char *oct)
  {
          int w, x, y, elem_oct, max;
 
         oct[22] = '\0';
         for (x = 63, elem_oct = 21; x >= 0; x--, elem_oct--)
         {
                 if (x > 0)
			 max = 4;
                 else
                         max = 1;
                 for (w = 0, y = 1; y <= max; y *= 2, x--)
                         w = ((binry[x] - '0') * y) + w;
                 x++;
                 oct[elem_oct] = w + '0';
         }
         return (oct);
 }
