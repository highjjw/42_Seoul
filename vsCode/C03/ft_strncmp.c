/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:44:21 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/28 19:17:03 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	printf("s1 : %c\n" , s1[i]);
	printf("s2 : %c\n" , s2[i]);
	return (s1[i] - s2[i]);
}

int main()
{
    char s1[] = "ab";
    char s2[] = "aa";

    printf("%i",ft_strncmp(s1,s2,1));
}