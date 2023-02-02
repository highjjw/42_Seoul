/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwjang <junwjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:26:32 by junwjang          #+#    #+#             */
/*   Updated: 2023/01/20 23:28:10 by junwjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
   int i ,j;
    i = 2;j =7;
    printf("i값은 :%i,  j값은 : %i\n",i,j);

    //swap 
    ft_swap(&i, &j);
    printf("%i,%i",i,j);

}