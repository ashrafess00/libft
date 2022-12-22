/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaoud <aessaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:58:05 by aessaoud          #+#    #+#             */
/*   Updated: 2022/12/22 13:12:51 by aessaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	int				i;

	ps = (unsigned char *) s;
	i = 0;
	while (n-- > 0)
	{
		if (ps[i] == (unsigned char) c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
