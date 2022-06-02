#include <unistd.h>

void 	ft_putstr ( char *str)
{
	int 	i;

	i = 0;
	while (*(str + i))
		i++;
	write ( 1 , str, i);
}

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	r[] = {"HeLOOOWW 42"};
	ft_putstr (ft_strlowcase (r));
}
