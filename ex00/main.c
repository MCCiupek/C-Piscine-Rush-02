/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:35:01 by vgallois          #+#    #+#             */
/*   Updated: 2019/06/23 14:02:29 by mciupek          ###   ########.fr       */
/*   Updated: 2019/06/23 14:24:15 by maspiewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	*s;

	if (ac != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!(s = ft_myatoi(av[1])))
		return (0);
	if (!ft_checkparams(ac, s))
		return (0);
	if (!(dict = parse("numbers.dict")))
		return (0);
	sortdict(dict);
	printnumber(s, ft_strlen(s), dict);
	ft_putstr("\n");
	ft_cleanmem(dict);
//	printf("%s\n", dict[10].number);
	return (0);
}
