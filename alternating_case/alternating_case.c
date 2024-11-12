/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alternating_case.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:55:08 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/12 16:55:40 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_alternating_case(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (c <= 'z')
	{
		if (i % 2 == 0)
			write(1, &c, 1);
		else
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		i++;
		c++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	print_alternating_case();
	return (0);
}
