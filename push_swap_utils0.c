/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils0.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 00:18:06 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:35:20 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_0(t_nood *a, int ac)
{
	int		i;
	t_nood	*ptr;

	while (--ac > 0)
	{
		ptr = a;
		i = ptr->d;
		while (ptr)
		{
			ptr = ptr->next;
			if (ptr && ptr->d == i)
				ft_exit(1);
		}
		a = a->next;
	}
}
