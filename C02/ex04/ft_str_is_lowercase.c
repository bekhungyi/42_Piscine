/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:06:17 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/02 17:09:52 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	else
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				i++;
			else
				return (0);
		}
	}
	return (1);
}
