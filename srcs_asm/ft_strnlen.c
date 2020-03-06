/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:21:58 by ffoissey          #+#    #+#             */
/*   Updated: 2018/11/13 11:22:01 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	len;

	len = 0;
	while (s[len] && len < n)
		len++;
	return (len);
}