/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:36:59 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/29 13:55:57 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[0] == '\0' || base[1] == '\0')
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		if ((base[i] == '-' || base[i] == '+')
				return (0);

