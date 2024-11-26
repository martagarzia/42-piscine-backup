/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:37:56 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/26 13:16:27 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strlcat:  appends the source string to the destination string,
it ensures the resulting string in dest is null-terminated,
and does not exceed the maximum buffer size.

size = buffer size
*/

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char	dest[50] = "Dolphins are cool";
	char	src[] = " and smart";
	unsigned int	size;
	unsigned int	result;

	size = 25;
	result = ft_strlcat(dest, src, size);
	printf("Result: %u", result);
	printf("Final string: %s", dest);
	return (0);
}

