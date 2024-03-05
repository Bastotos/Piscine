/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:48:46 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/22 15:43:41 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
        char    tab[] = "thrreh";
        char    tab1[] = "KYyui";
        char    tab2[] = "1486";

        printf("%s\n", ft_strlowcase(tab));
        printf("%s\n", ft_strlowcase(tab1));
        printf("%s\n", ft_strlowcase(tab2));
}*/
