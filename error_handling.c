/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:36 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:38 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_no_args(void)
{
	ft_putendl_fd("\033[31m ** ERROR : No arguments	**\033[0m", 2);
	exit (EXIT_FAILURE);
}

void	error_empty(void)
{
	ft_putendl_fd("empty arg", 2);
	exit (EXIT_FAILURE);
}

void	error_not_digit(void)
{
	ft_putendl_fd("\033[31m ** ERROR : Not digit **\033[0m", 2);
	exit (EXIT_FAILURE);
}

void	error(void)
{
	ft_putendl_fd("\033[31m ** ERROR **\033[0m", 2);
	exit(EXIT_FAILURE);
}
