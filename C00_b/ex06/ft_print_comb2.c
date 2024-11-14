/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:55:19 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/14 12:42:48 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_n(int num)
{
	ft_putchar((num / 10) + '0');
	ft_putchar((num % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_n(n1);
			ft_putchar(' ');
			ft_print_n (n2);
			if (n1 != 98 || n2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
