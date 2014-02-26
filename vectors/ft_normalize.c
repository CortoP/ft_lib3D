/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 14:02:51 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/25 16:31:26 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

double			ft_get_magnitude(t_vect *v)
{
	double		magnitude;

	magnitude = sqrt(pow(v->X, 2) + pow(v->Y, 2) + pow(v->Z, 2));
	return (magnitude);
}

t_vect			*ft_normalize(t_vect *vect)
{
	t_vect		*unit;
	double		mag;

	mag = ft_get_magnitude(vect);
	mag = 1 / mag;
	unit = ft_create_vector(vect->X * mag, vect->Y * mag, vect->Z * mag);
	return (unit);
}
