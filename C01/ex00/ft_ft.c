/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:42:22 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/14 15:48:02 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *ptr)
{
	*ptr = 42;
}

int	main(void)
{
	int c;
	int* ptr;

	c = 0;

	ft_ft(&number);
	printf("%d\n", number);
	return (0);
}
