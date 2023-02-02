/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:11:07 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/25 18:14:29 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(('A' <= str[i]) && (str[i] <= 'Z')))
		{
			if (!(('a' <= str[i]) && (str[i] < 'z')))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int main(){

	char test[100] = "ab123DDD";
	printf("%i\n",ft_str_is_alpha(test));

}