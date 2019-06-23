/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:35:01 by vgallois          #+#    #+#             */
/*   Updated: 2019/06/23 02:17:07 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	*s;
	if ((s = ft_myatoi(av[1])) == NULL)
		return (0);
	printf("%s\n", s);
	if (!ft_checkparams(ac, s))
		return (0);
	if (ac > 2)
		return (0);
	dict = parse("numbers.dict");
//	int i = 0;
//	while (dict[i].len != 0)
//	{
//		printf("dict[%d]:\n%s\n%s\n", i, dict[i].number, dict[i].str);
//		i++;
//	}
	printf("parse ok\n");
	printnumber(s, ft_strlen(s), dict);
	return (0);
}
