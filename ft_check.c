/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:44 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:47 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO : if the arg contain : space or multiple spaces in front -> " 55" or "     5" || just multiple spaces or empty -> "    " or "" || 

void	check_args(int ac, char **av)
{
	int		idx;
	int		jdx;

	jdx = 0;
	while (++jdx < ac)
	{
		if (!av[jdx])
			error();
		idx = -1;
		while (av[jdx][++idx])
		{
			if (idx == 0 && (av[jdx][idx] == '-' || av[jdx][idx] == '+'))
				idx++;
			if (av[jdx][idx] == ' ')
				idx++;
			if (!ft_isdigit(av[jdx][idx]))
				error();
		}
	}
}
