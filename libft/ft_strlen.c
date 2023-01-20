/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:27:28 by mulken            #+#    #+#             */
/*   Updated: 2022/10/11 22:27:29 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Girilen dizinin uzunluğunu ekrana yazdırır.

size_t	ft_strlen(const char *c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}
