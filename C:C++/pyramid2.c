#include <stdio.h>
void full_pyramid(int rows) 
{
       int i, space, k = 0;
   for (i = 1; i <= rows; ++i, k = 0) 
   {
      for (space = 1; space <= rows - i; ++space) 
      {
         printf(" ");
      }
      while (k != 2 * i - 1) 
      {
    
         printf("%d ", k&1);
         ++k;
      }
      printf("\n");
   }
}
int main() 
{
   printf("Enter the number of rows: ");
   int rows;
   scanf("%d", &rows);
   full_pyramid(rows);
   return 0;
}
