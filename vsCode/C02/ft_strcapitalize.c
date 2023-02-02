/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:31:31 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/26 18:00:40 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(void)
{
    char test[] = "Salut, comment tu vas ? 42MOTs quarante-deux; cinquante+et+un";

    printf("문: %s\n",ft_strcapitalize(test));

    printf("답: Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
}