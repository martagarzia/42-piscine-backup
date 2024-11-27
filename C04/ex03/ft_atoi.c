/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:31:30 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/27 01:03:00 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
atoi:
- output: a single integer value
- checks each character in the string,
- skips the whitespace at the beginning of the string;
- stops when it finds a non digit character;
- stops when it finds a space after a number;
- if it is a number:   it returns it, 
- if there is a + or - and a number:   it returns + or - and a number
	it calculates it like this
	+ * + = +;
	+ * - = -;
	- * - = +;

sign = 1 // positive
result // final integer 

9 is char HT ('\t' (horizontal tab)
'9' is char 9 (Dec 57)
*/

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	*str;

	str = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
