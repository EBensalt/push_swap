/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:27:24 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:34:14 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_nood **a, t_nood **b)
{
	t_nood	*ptr;

	if (!(*b))
		return ;
	ptr = *b;
	*b = (*b)->next;
	ptr->next = *a;
	*a = ptr;
	write(1, "pa\n", 3);
}
