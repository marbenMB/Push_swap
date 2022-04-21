/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:09:27 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/04/20 00:09:29 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	***********	Includes :
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include "./libft/libft.h"


//	STRUCT	***********	:
typedef struct s_stack
{
	int				elem;
	struct s_stack	*next;
}	t_stack;
//	FUNCTIONS	***********	:
//	***********	Error Handling :
void	error(void);
//	***********	Check Functions :
void	check_args(int ac, char **av);	//	Check if av : is empty || contains only digits
//	***********	Push_swap Function :
void	push_swap(int ac, char **av);
//	***********	Push_swap Utils Function :
t_list	*stock_elements(int ac, char **av);
#endif
