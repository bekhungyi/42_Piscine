/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:16:05 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/02 16:46:09 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i]) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while ((dest[i]) && (i < n))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
