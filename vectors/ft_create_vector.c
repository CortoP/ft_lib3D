/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 14:08:26 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/25 14:11:01 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_vect				*ft_create_vector(double x, double y, double z)
{
	t_vect			*vector;

	vector = (t_vect *)malloc(sizeof(t_vect));
	if (vector)
	{
		vector->X = x;
		vector->Y = y;
		vector->Z = z;
		return (vector);
	}
	return (NULL);
}
