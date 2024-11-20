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

int	main(void)
{
	char	str_test[] = "DOLphin";

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
