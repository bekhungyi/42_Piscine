#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Lorem ipsum sit amet consectetur adipisicing elit Blanditiis delectus";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
