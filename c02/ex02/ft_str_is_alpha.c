/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:29:17 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/22 16:38:37 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 92)
				|| (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char	tab[] = "efrrfrj";
	char	tab1[] = "";
	char	tab2[] = "12566";
	char	tab3[] = "ef15khu";

	printf("%d\n", ft_str_is_alpha(tab));
	printf("%d\n", ft_str_is_alpha(tab1));
	printf("%d\n", ft_str_is_alpha(tab2));
	printf("%d\n", ft_str_is_alpha(tab3));
}*/
