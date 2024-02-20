/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:24:03 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:40:53 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_nood **a, int i)
{
	t_nood	*ptr;
	t_nood	*ptr0;

	if (!(*a) || !(*a)->next)
		return ;
	ptr = *a;
	ptr0 = ptr->next;
	while (ptr0->next)
	{
		ptr = ptr0;
		ptr0 = ptr0->next;
	}
	ptr->next = NULL;
	ptr0->next = *a;
	*a = ptr0;
	if (i == 0)
		write(1, "rra\n", 4);
}
