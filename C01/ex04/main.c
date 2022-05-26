#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int x = 7;
	int y = 2;
	int *a = &x;
	int *b = &y;

	printf("%d /",x);
	printf(" %d\n",y);

	ft_ultimate_div_mod(a, b);
	
	printf("div (*a) = %d\n",*a);
	printf("mod (*b) = %d",*b);

}
