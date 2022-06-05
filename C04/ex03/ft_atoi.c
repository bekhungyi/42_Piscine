/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:36:27 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/05 14:45:13 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	nbr;

	c = 0;
	sign = 1;
	nbr = 0;
	while (str[c] == ' ' || (str[c] >= '\t' && str [c] <= '\r'))
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		nbr = (str[c] - '0') + (nbr * 10);
		c++;
	}
	return (nbr * sign);
}
