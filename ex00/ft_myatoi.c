/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myatoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 01:22:02 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/23 02:52:42 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <stdio.h>

char *ft_myatoi(char *str)
{
	int		len;
	int		i;
	int		j;
	char	sep;

	i = 1;
	len = ft_strlen(str);
	if (len > 4 && (str[len - 4] == ' ' || str[len - 4] == ','))
		sep = str[len - 4];
	else 
		return (str);
	while (str[len - i])
	{
		if (!(i % 4))
		{
			if (str[len - i] != sep)
				return (NULL);
			j = len - i;
			while (str[j])
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		i++;
	}
	return (str);
}
