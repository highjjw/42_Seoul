/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:49:28 by junwjang          #+#    #+#             */
/*   Updated: 2023/02/01 20:31:15 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int main()
{   

    // char ttt[] = "---++-123";
    // printf("*********내 정답********** : %i\n",ft_atoi(ttt));
    // printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("< ex03 >\n");
	char str8[] = "123csdff45678abcabcabc";
	char str9[] = "  ";
	char str10[] = "        24jkjkgcmhfht srghxrsegtest -frye";
	char str11[] = "--123456";
	char str12[] = "00";
	char str13[] = "+5287346";
	char str14[] = "213 432";
	char str15[] = "";
	printf("-----------answer------------\n");
	
	printf("%d\n", atoi(str8));
	printf("%d\n", atoi(str9));
	printf("%d\n", atoi(str10));
	printf("%d\n", atoi(str11));
	printf("%d\n", atoi(str12));
	printf("%d\n", atoi(str13));
	printf("%d\n", atoi(str14));
	printf("%d\n", atoi(str15));
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	printf("%d\n", ft_atoi(str8));
	printf("%d\n", ft_atoi(str9));
	printf("%d\n", ft_atoi(str10));
	printf("%d\n", ft_atoi(str11));
	printf("%d\n", ft_atoi(str12));
	printf("%d\n", ft_atoi(str13));
	printf("%d\n", ft_atoi(str14));
	printf("%d\n", ft_atoi(str15));
	printf("-------------------------------\n");
	
    
}
