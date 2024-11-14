/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:50:28 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/14 08:59:28 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';	
	while (letter  <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}

