/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:57:33 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/20 16:21:52 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char	dest[] = "AAAAAAAAAAAAAAHHHHHHHHHHHHHHH";
	char	src[] = "Coucou ............................................";
	int	n = 12;

	printf("%s\n", dest);
	printf("%s\n", ft_strncpy(dest, src, n));
}*/
