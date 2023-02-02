/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:20:00 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/18 22:22:15 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	char	i;

	i = '0';
	while (i <= '9')
	{		
		write(1, &i, 1);
		i++;
	}
}

int main(){
    ft_print_numbers();
    
}