#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	r[] = "";

	if ((ft_str_is_lowercase (r)) == 1)
		printf("is lowercase");
	else
		printf("notlowercase");
}
