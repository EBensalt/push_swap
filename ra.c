/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:46:56 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:40:42 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_nood **a, int i)
{
	t_nood	*ptr;
	t_nood	*ptr0;

	if (!(*a) || !(*a)->next)
		return ;
	ptr = *a;
	ptr0 = ptr;
	while (ptr0->next)
		ptr0 = ptr0->next;
	*a = (*a)->next;
	ptr->next = NULL;
	ptr0->next = ptr;
	if (i == 0)
		write(1, "ra\n", 3);
}
