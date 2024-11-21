/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:09:53 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/21 15:46:28 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	integer;
	int	remainder;

	a = 15;
	b = 2;
	ft_div_mod(a, b, &integer, &remainder);
	printf("integer: %d, remainder: %d\n", integer, remainder);
	return (0);
}
*/
