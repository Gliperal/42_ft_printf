/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_unsigned_decimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 14:43:19 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/05/11 14:46:08 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*format_unsigned_decimal(t_printable *p)
{
	char *str;
	char *ostr;
	unsigned long long n;

	if (p->modifier == MOD_HH)
		n = *((unsigned char *)p->data);
	else if (p->modifier == MOD_H)
		n = *((unsigned short *)p->data);
	else if (p->modifier == MOD_L)
		n = *((unsigned long *)p->data);
	else if (p->modifier == MOD_LL)
		n = *((unsigned long long *)p->data);
	else
		n = *((unsigned int *)p->data);
	str = ft_itoa_base_u(n, "0123456789");
	if (!str)
		return (NULL);
	if (p->flags & ALTFORM)
	{
		ostr = ft_strsum("0", str);
		free(str);
		return (ostr);
	}
	return (str);
}