#include <unistd.h>

char	*ft_strncat (char *dest, char *src, unsigned int nb);

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
	unsigned int nb = 2;
	char 	dest[100] = {"Hello "};
	char 	src[100] = {"42KL"};

	ft_strncat (dest, src, nb);
	ft_putstr (dest);
	return (0);
}
