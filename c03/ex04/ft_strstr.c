/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:24:13 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/29 14:14:24 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	c;

	c = ft_strlen(to_find);
	if (c < 1)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (j == c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char    tab[] = "je vmeux mourrir svp";
	char    tab1[] = "mourrir";
	
	printf("%s\n", ft_strstr(tab, tab1));
}*/
