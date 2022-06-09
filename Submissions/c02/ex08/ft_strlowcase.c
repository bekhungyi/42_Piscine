/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:56:17 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/02 17:56:57 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'a')
		i++;
	else
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
				i++;
		}
	}
	return (str);
}