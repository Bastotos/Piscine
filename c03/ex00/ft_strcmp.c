/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:19:13 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/29 14:04:46 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			c++;
		i++;
	}
	if (i == c)
		return (0);
	else
	{
		i = 0;
		return (s1[i] - s2[i]);
	}
}
/*
#include <stdio.h>

int main()
{
	char	tab[] = "coucou";
	char	tab1[] = "coucou";
	char	tab2[] = "thddgg";

	printf("%d\n", ft_strcmp(tab, tab1));
	printf("%d\n", ft_strcmp(tab, tab2));
}*/
