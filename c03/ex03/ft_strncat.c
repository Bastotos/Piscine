/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:35:14 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/25 12:46:18 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[k] && k <= (nb - 1))
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
        char    tab[] = "un";
        char    tab1[] = "deux";

        printf("%s\n", ft_strncat(tab, tab1, 2));
}*/
