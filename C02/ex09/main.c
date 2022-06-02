#include <unistd.h>

char	*ft_strcapitalize(char *str);

void 	ft_putstr ( char *str)
{
	int 	i;

	i = 0;
	while (*(str + i))
		
		i++;
	write ( 1 , str, i);
}

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	r[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	ft_putstr (ft_strcapitalize(r));
}
