#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "hi";
	char dest[] = "hello";
	unsigned int n = 4;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}