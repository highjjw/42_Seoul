/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:31:31 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/25 18:40:46 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_upper(char *str, int i)
{
	if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
	{
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] = str[0] -32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		{
			ft_upper(str, i);
		}
		i++;
	}
	return (str);
}
