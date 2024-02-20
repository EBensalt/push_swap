/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:18:52 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/11 20:39:19 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_nood **b, int i)
{
	t_nood	*ptr;
	t_nood	*ptr0;
	
	if(!(*b) || !(*b)->next)
		return ;
	ptr = *b;
	ptr0 = ptr->next;
	ptr->next = ptr0->next;
	ptr0->next = ptr;
	*b = ptr0;
	if (i == 0)
		write(1, "sb\n", 3);
}