/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheimerd <hheimerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 15:48:23 by hheimerd          #+#    #+#             */
/*   Updated: 2020/10/25 14:16:16 by hheimerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_strtolower(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		*s = ft_tolower(*s);
		s++;
	}
}
