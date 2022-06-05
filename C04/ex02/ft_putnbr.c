/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 07:41:35 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/05 07:57:27 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int n)
{
	write (1, &n, 4);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnum ('-');
		ft_putnum ('2');
		ft_putnbr (147483648);
	}
	else if (nb < 0)
	{
		ft_putnum('-');
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
		ft_putnum (nb + 48);
}
