/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirardi <mgirardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:00:51 by mgirardi          #+#    #+#             */
/*   Updated: 2023/03/26 00:00:51 by mgirardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while ((p1[i] != '\0' || p2[i] != '\0') && (i < n))
	{
		if (p1[i] == p2[i])
			i++;
		else if (p1[i] > p2[i])
			return (1);
		else if (p1[i] < p2[i])
			return (-1);
	}
	return (0);
}
