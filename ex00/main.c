/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:35:01 by vgallois          #+#    #+#             */
/*   Updated: 2019/06/23 22:35:25 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

void	rmsp(char *s, int j)
{
	while (s[j + 1])
	{
		s[j] = s[j + 1];
		j++;
	}
	s[j] = '\0';
}

void	removespaces(t_dict *dict)
{
	int		i;
	int		j;

	i = 0;
	while (dict[i].len)
	{
		j = 0;
		while (dict[i].str[j])
		{
			while (dict[i].str[j] == ' ' && dict[i].str[j + 1] == ' ')
				rmsp(dict[i].str, j);
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	t_dict	*dict;
	char	*s;

	s = ft_myatoi(av[ac - 1]);
	dict = parse("numbers.dict");
	if (ac != 2 || !s || !dict || !ft_checkparams(ac, s))
	{
		ft_putstr("Error\n");
		return (0);
	}
	removespaces(dict);
	sortdict(dict);
	if (!ft_strcmp(s, "0"))
		ft_putstr(dict[0].str);
	else if (!s)
		ft_putstr("Error");
	else
		printnumber(s, ft_strlen(s), dict);
	ft_putstr("\n");
	ft_cleanmem(&dict);
	return (0);
}
