#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = {"1234"};
	char s2[] = {"1234"};

	if (ft_strcmp(s1, s2) < 0)
		write (1, "s1 less", 7);
	else if (ft_strcmp(s1, s2) > 0)
		write (1, "s1 more", 7);
	else
		write (1, "same", 4);
	
	write (1, "\n", 1);
	return (0);
}
