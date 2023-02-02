/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:41:49 by junwjang          #+#    #+#             */
/*   Updated: 2023/02/01 20:57:07 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(int i)
{
	if ((i % 2 == 1))
		return (-1);
	return (1);
}

int	ft_find_base(char str, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{	
		if (str == base[count])
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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

int	ft_atoi_base(char *str, char *base)
{
	long long	number;
	int			count;

	count = 0;
	if (!is_valid(base))
		return (0);
	while (((9 <= *str) && (*str <= 13)) || *str == ' ' && *str)
		str++;
	while (*str == '-' || *str == '+' && *str)
	{
		if (*str == '-')
			count++;
		str++;
	}
	number = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
			return (check_sign(count) * number);
		if (ft_find_base(*str, base) == -1)
			return (0);
		number = number * (ft_strlen(base)) + (ft_find_base(*str, base));
		str++;
	}
	return (check_sign(count) * number);
}
