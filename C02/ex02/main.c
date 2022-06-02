/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:58:04 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/02 16:44:28 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int i;

// int i = 0;
// int	ft_str_is_alpha(char *str)
// {
// 	if (str[i] == '\0')
// 		return (1);
// 	else
// 		while (str[i])
// 		{
// 			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
// 			i++;
// 			else
// 				return(0);
// 		}
// 		return (1);
// }

int	ft_str_is_alpha(char *str);

int  	main ( void )
{
	char 	r[] = "";
	
    if (( ft_str_is_alpha (r)) == 1 )
		printf( " string contains only alphabetic characters \n " );
	else								
		printf( " string contains other characters \n " );
	
	return ( 0 );
}
