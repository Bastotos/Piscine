/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:20:30 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/22 13:47:40 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char	tab[] = "thrreh";
	char    tab1[] = "KYyui";
	char    tab2[] = "1486";

	printf("%s\n", ft_strupcase(tab));
	printf("%s\n", ft_strupcase(tab1));
	printf("%s\n", ft_strupcase(tab2));
}*/
