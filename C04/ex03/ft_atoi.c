/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:49:28 by junwjang          #+#    #+#             */
/*   Updated: 2023/02/01 20:40:17 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(int i)
{
	if ((i % 2 == 1))
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	count;

	i = 0;
	result = 0;
	count = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (check_sign(count) * result);
}
