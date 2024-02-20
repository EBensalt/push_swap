/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:13:14 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:40:47 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_nood **b, int i)
{
	t_nood	*ptr;
	t_nood	*ptr0;

	if (!(*b) || !(*b)->next)
		return ;
	ptr = *b;
	ptr0 = ptr;
	while (ptr0->next)
		ptr0 = ptr0->next;
	*b = (*b)->next;
	ptr->next = NULL;
	ptr0->next = ptr;
	if (i == 0)
		write(1, "rb\n", 3);
}
