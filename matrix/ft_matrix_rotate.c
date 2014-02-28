/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 11:22:56 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/28 11:28:27 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft3d.h>

t_dot		*ft_matrix_rotate(const double rot[3], t_dot *dot)
{
	if (rot[0] != 0)
		dot = ft_dot_matrix_mult(dot, ft_matrix_rx(rot[0]));
	if (rot[1] != 0)
		dot = ft_dot_matrix_mult(dot, ft_matrix_rx(rot[1]));
	if (rot[2] != 0)
		dot = ft_dot_matrix_mult(dot, ft_matrix_rx(rot[2]));
	return (dot);
}
