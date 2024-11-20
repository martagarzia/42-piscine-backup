#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    if (!str[i])
        return (1);
    while (str[i])
    {
        if (str[i] < 32 || str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char str_test[] = "Dolphin";

    if (ft_str_is_printable(str_test))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return (0);
}
