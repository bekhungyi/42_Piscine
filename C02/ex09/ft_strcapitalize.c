/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:00:18 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/02 19:58:30 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || str[i -1] == ' ' || )
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
				i++;
		}
		else if ()
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
				i++;
		}
		else
			i++;
	}
	return (str);
}
