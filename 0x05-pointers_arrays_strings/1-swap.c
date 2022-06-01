#include "main.h"
/**
 * swap_int-swaps intergers.
 * @a: yes
 * @b: yes
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
