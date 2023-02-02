/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:54:14 by junwjang          #+#    #+#             */
/*   Updated: 2023/02/02 12:23:34 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	put_char(char c)
{
	write(1, &c, 1);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int			cnt;
	long long	n;

	n = nbr;
	cnt = ft_strlen(base);
	if (is_valid(base) == 1)
	{
		if (n < 0)
		{
			put_char('-');
			n *= -1;
		}
		if (n >= cnt)
		{
			ft_putnbr_base((n / cnt), base);
			ft_putnbr_base((n % cnt), base);
		}
		else
			put_char(base[n]);
	}
}

int main()
{   
    int co = 34;
    char test[] = "012";
    ft_putnbr_base(co ,test);

	// printf("< ex04 >\n");
	// char buf[] = "0123456789abcdef";
	// printf("-----------answer------------\n");
	
	// printf("%x\n", 1234);
	// printf("-%x\n", 345);
	// printf("%x\n", -00);
	// printf("%x\n", 0);
	// printf("-------------------------------\n\n");
	// printf("-----------output------------\n");
	// ft_putnbr_base(1234, buf);
	// printf("\n");
	// ft_putnbr_base(-345, buf);
	// printf("\n");
	// ft_putnbr_base(-00, buf);
	// printf("\n");
	// ft_putnbr_base(0, buf);
	// printf("\n");
	// printf("-------------------------------\n");
}