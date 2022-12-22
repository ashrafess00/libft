/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaoud <aessaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:32:25 by aessaoud          #+#    #+#             */
/*   Updated: 2022/12/22 13:12:51 by aessaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*pb;

	i = 0;
	pb = (unsigned char *) b;
	while (len-- > 0)
	{
		*(pb + i) = c;
		i++;
	}
	return (b);
}
