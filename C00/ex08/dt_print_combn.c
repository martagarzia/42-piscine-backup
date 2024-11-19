/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:28:19 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/19 12:36:28 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	while(n <= 89)
	{
		if (n < 9)
		{
			ft_print_combn(n / 10);
		}
	}
	ft_putchar(n)
}

int	main(void)
{
	ft_print_combn(2);
	return (0);	
}
