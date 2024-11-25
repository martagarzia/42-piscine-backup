/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:16:50 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/25 11:19:39 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str_test;

	str_test = "DOLphin";
	if (ft_str_is_uppercase(str_test))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
*/
