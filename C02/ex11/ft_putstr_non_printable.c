/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:46:03 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/26 19:23:13 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[a / 16]);
			ft_putchar(hex[a % 16]);
		}
		i++;
	}
}
