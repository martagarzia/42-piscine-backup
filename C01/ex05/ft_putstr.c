/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:53:18 by mgarzia           #+#    #+#             */
/*   Updated: 2024/11/20 15:59:05 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
}

int main() {
    char *testString = "Dolphins are cool";
    ft_putstr(testString);
    write(1, "\n", 1);
    return 0;
}
