#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[100] = "Hello 42 KL Msia";
	char find[100] = "42";
	printf("%s", ft_strstr(str, find));
}
