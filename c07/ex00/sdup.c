/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sdup.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:16:38 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/09 12:01:59 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*output;
	
	index = 0;
	while (src[index] != 0)
		index++;
	output = malloc(sizeof(char) * (index + 1));
	index = 0;
	while (src[index])
	{
		output[index] = src[index];
		index++;
	}
	output[index] = '\0';
	return (output);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*dup;

	if (ac > 1)
	{
		dup = ft_strdup(av[1]);
		printf("%s", dup);
	}
}
