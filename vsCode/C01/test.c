#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void    ft_rev_int_tab(char *tab, int size)
{
	int i;
	int tmp;
	i = 0;

	while(i < ((size-1)/2))
	{	
		
		tmp = tab[i];
		tab[i] = tab[size-2-i];
		tab[size-2-i] = tmp;
		
		i++;
	}

}

int main()
{

char test[7] = {'a','b','c','d','e','f'};
ft_putstr(test);
ft_rev_int_tab(test,7);
printf("\n");
ft_putstr(test);

}