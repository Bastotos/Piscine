/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broumeng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:56:11 by broumeng          #+#    #+#             */
/*   Updated: 2024/02/23 11:16:35 by broumeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	void ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (srt[i] != '\0')
	{
		if (
