#include <stdio.h>

void *increment(int *a)
{
	(*a)++;
}
int	main()
{
	int	d = 10;
  int *p;
	 p = increment(&d);
	printf("%d", p);
}
