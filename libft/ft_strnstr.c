/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshondra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:26:52 by jshondra          #+#    #+#             */
/*   Updated: 2020/11/04 19:14:26 by jshondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *sub, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	j;

	k = 0;
	j = 0;
	if ((i = ft_strlen(sub)) == 0)
		return ((char*)s1);
	while (s1[k] && k < len)
		if (s1[k++] == sub[j++])
		{
			if (i == j)
				break ;
		}
		else if (s1[k++] != sub[j])
			j = 0;
	if (i == j)
	{
		k = k - j + 1;
		while (--k > 0)
			s1++;
		return ((char*)s1);
	}
	return (NULL);
}
