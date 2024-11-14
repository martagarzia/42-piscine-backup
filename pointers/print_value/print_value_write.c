/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_value_write.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:17:38 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/14 17:23:08 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);	
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
	int	a;
	int	*ptr;

	a = 42;
	ptr = &a;
	ft_putnbr(*ptr);
	write(1, "/n", 1);
	return (0);
}


