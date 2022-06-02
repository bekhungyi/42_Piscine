#include <unistd.h>

char	*ft_strupcase(char *str);

void 	ft_putstr ( char *str)
{
	int 	i;

	i = 0;
	while (*(str + i))
		i++;
	write ( 1 , str, i);
}

char	*ft_strupcase(char *str);

int	main(void)
{
	char	r[] = {"helLo 42"};
	ft_putstr (ft_strupcase (r));
}
