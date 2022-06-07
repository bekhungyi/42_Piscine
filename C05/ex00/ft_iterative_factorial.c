/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:02:15 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/07 18:00:34 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb > 0 && nb < 13)
	{
		n = nb--;
		while (nb > 1)
		{
			n *= nb;
			nb--;
		}
		return (n);
	}
	else
		return (0);
}
