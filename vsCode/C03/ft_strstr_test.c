#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	i = 0;
	j = 0;
	if (!to_find)
		return (str);
	while (str[i])
	{
		if (to_find[j] == '\0')
			return (&str[i]);
		if (str[i + j] == to_find[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
	}
	return (0);
}

int main()
{
    char str[100] = "";
    char to_find[] = "";

    char *ptr = ft_strstr(str,to_find); 
    printf("%s\n",ptr); 
}