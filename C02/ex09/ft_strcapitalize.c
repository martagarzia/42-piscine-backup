#include <unistd.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i;
    int first_letter;

    i = 0;
    first_letter = 1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (first_letter == 1)
                str[i] = str[i] - 32;
            first_letter = 0;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (first_letter == 0)
                str[i] = str[i] + 32;
            first_letter = 0;
        }
        else if ((str[i] >= '0' && str[i] <= '9') == 0)
            first_letter = 1;
        else
            first_letter = 0;
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf("%s\n", str);
    return (0);
}
