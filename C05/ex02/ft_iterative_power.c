/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:37:50 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/27 04:42:39 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(2, 3) = 8
(5, 0) = 1
(0, 0) = 1
(3, 2) = 0
*/

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	int	result;

	result = ft_iterative_power(2, 3);
	printf("%d", result);
}
*/
