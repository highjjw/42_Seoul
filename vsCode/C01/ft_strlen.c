/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:46:40 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/21 19:09:56 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
	count++;
	}
	return (count);
}

int main(){
    char number[8] = {'1','2','3','4','5','6','7'};
	char hi[] = {"hellkdnmkdmkdmko"};
    int result = ft_strlen(number);

    printf("%i\n",result);
	printf("%i\n",ft_strlen(hi));
    

}