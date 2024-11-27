/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:02:09 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/27 05:12:29 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

fibonacci: is a series of numbers,
where each number is the sum of the two preceding ones, starting from 0 and 1.

F(n)=F(n−1)+F(n−2) for 𝑛 > 1 n>1

10 = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

*/

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	result;

	result = ft_fibonacci(10);
	printf("%d", result);
	return (0);
}
*/
