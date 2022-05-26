void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Hello, 42!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
