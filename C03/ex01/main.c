#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int n = 4;
	char s1[] = {"123446"};
	char s2[] = {"123458"};

	if (ft_strncmp(s1, s2, n) < 0)
		write (1, "s1 less", 7);
	else if (ft_strncmp(s1, s2, n) > 0)
		write (1, "s1 more", 7);
	else
		write (1, "same", 4);

	write (1, "\n", 1);
	return (0);
}
