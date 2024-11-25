/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:10:17 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/25 12:26:53 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_lowercase(char *c, int *first_letter)
{
	if (*c >= 'a' && *c <= 'z')
	{
		if (*first_letter == 1)
			*c = *c - 32;
		*first_letter = 0;
		return (1);
	}
	return (0);
}

int	is_uppercase(char *c, int *first_letter)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		if (*first_letter == 0)
			*c = *c + 32;
		*first_letter = 0;
		return (1);
	}
	return (0);
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if (!is_lowercase(&str[i], &first_letter)
			&& !is_uppercase(&str[i], &first_letter))
		{
			if (!is_digit(str[i]))
				first_letter = 1;
			else
				first_letter = 0;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
