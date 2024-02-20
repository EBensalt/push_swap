/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:58:10 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/27 00:59:25 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**f1(char **a, char **s)
{
	int	b;

	b = 0;
	while (s[b] != NULL)
	{
		a[b] = s[b];
		b++;
	}
	return (a);
}

char	**ft_strjoin(char **s1, char **s2)
{
	char	**a;
	int		c;
	int		b;

	if (!s1 || !s2)
		return (0);
	c = 0;
	while (s1[c] != NULL)
		c++;
	b = 0;
	while (s2[b] != NULL)
		b++;
	a = malloc(((c + b) + 1) * sizeof(char *));
	if (a == NULL)
		return (0);
	f1(a, s1);
	f1((a + c), s2);
	a[c + b] = NULL;
	return (a);
}
