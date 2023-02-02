/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:25:17 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/31 19:34:58 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_valid(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;

	c = 0;
	if (!(is_valid(base)))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base((nbr / ft_strlen(base)), base);
		ft_putnbr_base((nbr % ft_strlen(base)), base);
	}
	else if (nbr < 0)
	{
		put_char('-');
		nbr *= -1;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr < ft_strlen(base))
	{
		c = base[nbr];
		put_char(c);
	}
}

int main()
{   
    int co = -345;
    char test[] = "01";
    ft_putnbr_base(co ,test);
	
}