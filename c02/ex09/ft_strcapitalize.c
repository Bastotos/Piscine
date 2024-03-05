/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:53:40 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/22 16:40:40 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	maj;

	i = 0;
	maj = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| str[i] >= 123)
			maj = 1;
		if (maj == 0 && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		if (maj == 1 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			maj = 0;
		}
		if (maj == 1 && (str[i] >= 48 && str[i] <= 57))
			maj = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char	tab[] = "salut, comment tu vas ?
       	42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(tab));
}*/
