/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:03:19 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/07 22:04:38 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	p;

	i = argc - 1;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j])
		{
			p = argv[i][j];
			write (1, &p, 1);
			j++;
		}
		i--;
		write (1, "\n", 1);
	}
	return (0);
}
