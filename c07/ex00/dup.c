/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:29:19 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/08 18:59:52 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*a(char *str)
{
	int		index;
	char	*output;

	index = 0;
	output = NULL;
	while (str[index] != 0)
		index++;
	output = malloc(sizeof(char) * (index - 15));
	index = 0;
	while (str[index] != 0)
	{
		output[index] = index + 49;
		index++;
	}
	output[index] = '\0';
	return (output);
}

int	main(int ac, char **av)
{
	ac = 0;
	char *printing;
	
	printing = NULL;
	printing = a(av[1]);
	printf("%s", printing);
	system("leaks a.out");
	return (0);
}
