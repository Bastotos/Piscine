/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:16:50 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/22 15:47:14 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48 && str[i] <= 57)))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
        char    tab[] = "efrrfrj";
        char    tab1[] = "";
        char    tab2[] = "12566";
        char    tab3[] = "ef15khu";

        printf("%d\n", ft_str_is_numeric(tab));
        printf("%d\n", ft_str_is_numeric(tab1));
        printf("%d\n", ft_str_is_numeric(tab2));
        printf("%d\n", ft_str_is_numeric(tab3));
}*/
