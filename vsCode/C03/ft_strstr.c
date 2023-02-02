/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:50:22 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/30 20:02:01 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);

	while (str[i] != '\0')
	{
	j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

int main()
{
    char str[100] = "Hello World";
    char to_find[] = "Wor";

    char *ptr = ft_strstr(str,to_find); 

  //  strncpy(ptr,"42Seoul",7); // 찾아준 위치부터 문자열 복사

    printf("%s\n",ptr); //   
}