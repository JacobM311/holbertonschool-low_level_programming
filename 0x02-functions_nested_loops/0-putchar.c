#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;
	
	i = 0;
	while(str[i] = '\0')
	{
    		_putchar(str[i]);
    		i++;
	}
}
/**0-putchar.c:13:8: error: suggest parentheses around assignment used as truth value [-Werror=parentheses]
   13 |  while(str[i] = '\0');
      |        ^~~
0-putchar.c:13:2: error: this ‘while’ clause does not guard... [-Werror=misleading-indentation]
   13 |  while(str[i] = '\0');
      |  ^~~~~
0-putchar.c:14:2: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘while’
   14 |  {
      |  ^
0-putchar.c:18:1: error: control reaches end of non-void function [-Werror=return-type]
   18 | }
      | ^
      */
