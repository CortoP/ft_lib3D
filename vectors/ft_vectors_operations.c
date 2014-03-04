/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors_operations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:17:14 by vlehuger          #+#    #+#             */
/*   Updated: 2014/03/04 12:16:21 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft3d.h>

t_vect			*ft_add_vectors(t_vect *v1, t_vect *v2)
{
	return (ft_create_vector(v1->X + v2->X, v1->Y + v2->Y, v1->Z + v2->Z));
}

t_vect			*ft_sub_vectors(t_vect *v1, t_vect *v2)
{
	return (ft_create_vector(v1->X - v2->X, v1->Y - v2->Y, v1->Z - v2->Z));
}

t_vect			*ft_mult_vector(t_vect *v, double k)
{
	return (ft_create_vector(v->X * k, v->Y * k, v->Z * k));
}

t_vect			*ft_div_vector(t_vect *v, double k)
{
	return (ft_create_vector(v->X / k, v->Y / k, v->Z / k));
}
