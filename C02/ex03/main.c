#include <stdio.h>

int	ft_str_is_numeric(char *str);

int  	main ( void )
{
	char 	r[] = "42";

    if ((ft_str_is_numeric (r)) == 1 )
		printf( " string contains only num characters \n " );
	else
		printf( " string contains other characters \n " );

	return ( 0 );
}
