/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 20:13:11 by mannette          #+#    #+#             */
/*   Updated: 2019/04/21 21:04:40 by mannette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (i + j < j || i + j < i)
		return (NULL);
	if (!(str = ft_strnew(i + j)))
		return (NULL);
	ft_strcpy(str, s1);
	ft_memmove(str + i, s2, j);
	str[i + j] = '\0';
	return (str);
}
