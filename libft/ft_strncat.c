/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:00:41 by emoreau           #+#    #+#             */
/*   Updated: 2017/11/19 15:52:53 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (s1[i])
		i++;
	while (s2[p] && p < n)
	{
		s1[i] = s2[p];
		i++;
		p++;
	}
	s1[i] = '\0';
	return (s1);
}
