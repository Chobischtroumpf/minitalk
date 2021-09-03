/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:32:08 by adorigo           #+#    #+#             */
/*   Updated: 2021/09/04 00:08:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dest;

	if (s1 && s2)
	{
		dest = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
		if (dest == NULL)
			return (NULL);
		ft_strcpy(dest, s1);
		ft_strcat(dest, s2);
		return (dest);
	}
	else
		return (NULL);
}
