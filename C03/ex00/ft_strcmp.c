/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:43:58 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/25 17:15:10 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
signed char: 0-127 ASCII
unsigned char: 0-255 ASCII (strcmp uses unsigned char)

strcmp : compares the ascii values of the first characters that are different 
between the strings, starting from the first one.

Returns an integer.
*/

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "abcd";
	str2 = "abcD";
	result = ft_strcmp(str1, str2);
	printf("%d", result);
	return (0);
}
*/
