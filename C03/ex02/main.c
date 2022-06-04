#include <unistd.h>

char	*ft_strcat (char *dest, char *src);

void 	ft_putstr (char *str)
{
	int 	i;

	i = 0;
	while (*(str + i))
		i++;
	write (1 , str, i);
}

int  	main ( void )
{
	char 	dest[100] = {"Hello "};
	char 	src[100] = {"42KL"};

	ft_strcat (dest, src);
	ft_putstr (dest);
	return (0);
}
