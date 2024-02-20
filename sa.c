/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:04:31 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:41:31 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_nood **a, int i)
{
	t_nood	*ptr;
	t_nood	*ptr0;

	if (!(*a) || !(*a)->next)
		return ;
	ptr = *a;
	ptr0 = ptr->next;
	ptr->next = ptr0->next;
	ptr0->next = ptr;
	*a = ptr0;
	if (i == 0)
		write(1, "sa\n", 3);
}
