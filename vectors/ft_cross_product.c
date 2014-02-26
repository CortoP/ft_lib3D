/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross_product.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 16:34:39 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/26 11:24:00 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_vect		*ft_cross_product(t_vect *u, t_vect *v)
{
	t_vect *w;

	w = ft_create_vector(0, 0, 0);
	w->X = u->Y * v->Z - v->Y * u->Z;
	w->Y = u->Z * v->X - v->Z * u->X;
	w->Z = u->X * v->Y - v->X * u->Y;
	return (w);
}
