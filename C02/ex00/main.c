#include <stdio.h>

char	ft_strcpy(char *dest, char *src);

int	main()
{
	char src[] = "beautiful";
	char dest[] = "dest str";
	ft_strcpy(dest, src);
	printf("%s", dest);
}
