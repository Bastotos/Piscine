/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:47:10 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/23 10:40:05 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char	tab[] = "coucou";
	char	dest[] = "";

	printf("%d\n", ft_strlcpy(dest, tab, 3));
}*/
