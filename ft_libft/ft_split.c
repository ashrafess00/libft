/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaoud <aessaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:54:33 by aessaoud          #+#    #+#             */
/*   Updated: 2022/12/22 13:12:51 by aessaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	calc_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	create_arr(const char *s, char **main_arr, char c)
{
	int	i;
	int	count;
	int	main_i;

	i = 0;
	main_i = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + count] && s[i + count] != c)
			count++;
		if (s[i])
		{
			main_arr[main_i] = (char *)ft_calloc(count + 1, sizeof(char));
			if (main_arr[main_i] != NULL)
				ft_memmove(main_arr[main_i], s + i, count);
			main_i++;
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words_count;
	char	**main_box;

	if (!s)
		return (0);
	words_count = calc_words(s, c);
	main_box = (char **) ft_calloc(words_count + 1, sizeof(char *));
	if (main_box != NULL)
	{
		create_arr(s, main_box, c);
		return (main_box);
	}
	return (0);
}

// int	main()
// {
// 	char	word[] = "ashraf,ess,lolo";
// 	int	i = 0;
// 	char	del = ',';
// 	int	c;

// 	c = 0;
// 	while (word[i])
// 	{
// 		while (word[i] && word[i] == del)
// 			i++;
// 		if(word[i])
// 	}
// }