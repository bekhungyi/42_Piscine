/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:58:04 by bhung-yi          #+#    #+#             */
/*   Updated: 2022/06/01 20:13:41 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int i;

i = '0';
int	ft_str_is_alpha(char *str)
{
	while (str != '\0')
	{
		if (str[i] >= "a" && str[i] <= "z" || str[i] >= "A" && str[i] <= "Z");
			return (1);
			i++;

		else
			return (0);
			i++;
	}
	if (str = '\0')
		return (1);
}

int main()
{
	ft_str_is_alpha(hello);
	printf(return);
}
