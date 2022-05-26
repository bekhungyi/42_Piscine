#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int i  = 9;
	int j  = 6;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("%d\n",*a);
	printf("%d",*b);
}
