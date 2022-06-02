#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	r[] = "HELOo";

	if ((ft_str_is_uppercase (r)) == 1)
		printf("is UPcase");
	else
		printf("not upcase");
}
