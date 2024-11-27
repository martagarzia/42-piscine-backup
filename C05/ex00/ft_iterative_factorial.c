/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:02:24 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/27 04:20:37 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
factorial: 
is the product of all positive numbers from 1 to a given number n.
n!=n×(n−1)×(n−2)×⋯ ×1
if n = 0, the factorial is 0! = 1

iteration 1: result = 1 * 1 = 1
iteration 2: result = 1 * 2 = 2
iteration 3: result = 2 * 3 = 6
iteration 4: result = 6 * 4 = 24
iteration 5: result = 24 * 5 = 120

*/

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	number;
	int	result;

	number = 5;
	result = ft_iterative_factorial(number);
	printf("%d", result);
	return (0);
}
*/
