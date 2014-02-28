/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_matrix_mult.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 10:45:47 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/28 10:54:29 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft3d.h>

t_dot		*ft_dot_matrix_mult(t_dot *dot, double **mat)
{
	t_dot	*ret;
	int		i;
	int		j;

	if ((ret = ft_create_vector(0, 0, 0)))
	{
		i = 0;
		while (i < 3)
		{
			j = 0;
			while (j < 3)
			{
				ret->coord[i] = ret->coord[i] + mat[j][i] * dot->coord[j];
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
