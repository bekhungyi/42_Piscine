/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:09:39 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/07 23:04:54 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	p;

	i = 1;
	while (argv[i])
	{
		if (argv[i][j] != '\0' && argv[i][j] == argv[i + 1][j])
			j++;
		else
			return (argv[i][j] - argv[i + 1][j]);
	}
	i++;
}
