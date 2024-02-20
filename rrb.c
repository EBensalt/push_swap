/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:57:14 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:40:58 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_nood **b, int i)
{
	t_nood	*ptr;
	t_nood	*ptr0;

	if (!(*b) || !(*b)->next)
		return ;
	ptr = *b;
	ptr0 = ptr->next;
	while (ptr0->next)
	{
		ptr = ptr0;
		ptr0 = ptr0->next;
	}
	ptr->next = NULL;
	ptr0->next = *b;
	*b = ptr0;
	if (i == 0)
		write(1, "rrb\n", 4);
}
