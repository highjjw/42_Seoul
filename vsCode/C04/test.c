#include <stdio.h>

int	check_sign(int i)
{
	if ((i % 2 == 1))
		return (-1);
	return (1);
}
int		ft_find_base(char ch, char *base)
{
	int count;

	count = 0;
	while (base[count] != '\0')
	{
		if (ch == base[count])
			return (count);
		count++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] != base[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int number;
	int base_nbr;
	int count;

	count = 0;
	if (!is_valid(base))
		return (0);
	while ((9 <= *str) && (*str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			count++;
		}
		str++;
	}
	base_nbr = ft_strlen(base);
	number = 0;
	while (*str != '\0')
	{
		number *= base_nbr;
		if (ft_find_base(*str, base) == -1)
			return (0);
		number += (ft_find_base(*str, base));
		str++;
	}
	return (check_sign(count)*number);
}

int main()
{
    char hex[] = "0123456789abcdef";

    char test[] = "213";
    printf("%i\n", ft_atoi_base(test, hex));

	// printf("< ex05 >\n");
	// char buf2[] = "0123456789abcdef";
	
	// char str16[] = "cabc";
	// char str17[] = "  ";
	// char str18[] = "        24";
	// char str19[] = "--123456";
	// char str20[] = "00";
	// char str21[] = "+5287";
	// char str22[] = "213 432";
	// char str23[] = "";
	// printf("-----------answer------------\n");
	// printf("51900\n");
	// printf("\n");
	// printf("36\n");
	// printf("1193046\n");
	// printf("0\n");
	// printf("21127\n");
	// printf("531\n");
	// printf("\n");
	// printf("-------------------------------\n\n");
	// printf("-----------output------------\n");
	// printf("%d\n", ft_atoi_base(str16, buf2));
	// printf("%d\n", ft_atoi_base(str17, buf2));
	// printf("%d\n", ft_atoi_base(str18, buf2));
	// printf("%d\n", ft_atoi_base(str19, buf2));
	// printf("%d\n", ft_atoi_base(str20, buf2));
	// printf("%d\n", ft_atoi_base(str21, buf2));
	// printf("%d\n", ft_atoi_base(str22, buf2));
	// printf("%d\n", ft_atoi_base(str23, buf2));
	// printf("-------------------------------\n");
}