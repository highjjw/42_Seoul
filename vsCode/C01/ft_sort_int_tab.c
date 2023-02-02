/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:22:01 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/22 19:33:02 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		i = 0;
		j++;
	}
}

int main()
{

    int test[8] = {4,2,7,5,1,6,8,3};
    for(int i=0;i<8;i++)
    {
	    printf("%i", test[i]); 
    }

//함수실험
printf("\n");

ft_sort_int_tab(test, 8);

for(int i=0;i<8;i++)
    {
	    printf("%i", test[i]); 
    }

}