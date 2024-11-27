/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:25:14 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/27 04:29:10 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_recursive_factorial(5)
5 * ft_recursive_factorial(4)
5 * (4 * ft_recursive_factorial(3))
5 * (4 * (3 * ft_recursive_factorial(2)))
5 * (4 * (3 * (2 * ft_recursive_factorial(1))))
5 * (4 * (3 * (2 * 1)))
5 * 4 * 3 * 2 * 1 = 120
*/

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	result;

	nb = 5;
	result = ft_recursive_factorial(nb);
	printf("%d", result);
	return (0);
}
*/
