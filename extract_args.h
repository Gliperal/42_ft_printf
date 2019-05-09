/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_args.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 08:27:34 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/05/08 21:23:52 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRACT_ARGS_H
# define EXTRACT_ARGS_H

#include "libftprintf.h"

# define ARGSIZE char
# define SIZE_CHAR 1
# define SIZE_SHORT 2
# define SIZE_INT 3
# define SIZE_LONG 4
# define SIZE_LONGLONG 5
# define SIZE_STR 6

typedef struct	s_argument
{
	ARGSIZE		type;
	void		*data;
}				t_argument;

typedef struct	s_arglist
{
	int			size;
	t_argument	**args;
}				t_arglist;

#endif
