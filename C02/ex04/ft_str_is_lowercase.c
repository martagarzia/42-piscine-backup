/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:12:59 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/25 11:16:01 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	if (ft_str_is_lowercase(str_test))
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
