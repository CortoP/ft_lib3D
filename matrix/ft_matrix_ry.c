/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_ry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 11:13:39 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/28 11:21:14 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft3d.h>

double		**ft_matrix_ry(double angle)
{
	double	**mat;
	int		i;
	int		j;

	mat = ft_create_matrix();
	if (mat)
	{
		mat[0][0] = cos(angle);
		mat[0][1] = 0;
		mat[0][2] = -sin(angle);
		mat[1][0] = 0;
		mat[1][1] = 1;
		mat[1][2] = 0;
		mat[2][0] = sin(angle);
		mat[2][1] = 0;
		mat[2][2] = cos(angle);
		return (mat);
	}
	return (NULL);
}
