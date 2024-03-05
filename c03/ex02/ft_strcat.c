/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:16:24 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/25 12:45:27 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char	tab[] = "un";
	char	tab1[] = "deux";

	printf("%s\n", ft_strcat(tab, tab1));
}*/
