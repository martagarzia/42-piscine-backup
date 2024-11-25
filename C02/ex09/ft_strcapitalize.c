/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:10:17 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/25 14:48:03 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
48 - 57 = numbers
65 - 90 = capital letters
97 - 122 = lowercase letters
*/

#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 65 && str[i] <= 90)
                        str[i] = str[i] + 32;
                i++;
        }

        i = 0;
        while (str[i] != '\0')
        {
                if (i == 0 || !((str[i - 1] >= 48 && str[i - 1] <= 57) ||
                                (str[i - 1] >= 65 && str[i - 1] <= 90) ||
                                (str[i - 1] >= 97 && str[i - 1] <= 122)))
                {
                        if (str[i] >= 97 && str[i] <= 122)
                                str[i] = str[i] - 32;
                }
                i++;
        }
        return (str);
}

int     main(void)
{
        char    str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

        printf("%s", (ft_strcapitalize(str)));
        return 0;
}

