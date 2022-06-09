/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 01:49:57 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/08 02:23:30 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*dest;

	l = ft_strlen (src);
	if ((dest = malloc (sizeof (*src) * (l + 1))) == ((void *)0))
		return ((void *)0);
	while (l >= 0)
	{
		dest[l] = src[l];
		l--;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	char *dup;

	if (argc > 1)
	{
		dup = ft_strdup(argv[1]);
		printf ("%s", dup);
		free (dup);
	}
	return (0);
}
