/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:44:48 by mannette          #+#    #+#             */
/*   Updated: 2019/04/16 21:52:35 by mannette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *str;

	str = s1;
	while (*str)
	{
		str++;
	}
	while (*s2 && n != 0)
	{
		*str = *s2;
		str++;
		s2++;
		n--;
	}
	*str = '\0';
	return (s1);
}