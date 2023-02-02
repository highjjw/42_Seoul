/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:30:26 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/22 20:00:42 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{		
		tmp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = tmp;
		i++;
	}
}

int main(){
	int test[6] = {1,2,3,4,5,6};
	for(int i = 0; i<6;i++){
		printf("%i", test[i]);
	}
	printf("\n");
	ft_rev_int_tab(test,6);
	for(int i = 0; i<6;i++){
		printf("%i", test[i]);
	}
}