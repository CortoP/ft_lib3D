/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mult_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 14:18:56 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/26 14:39:35 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

double		**ft_mult_matrix(double **mat1, double **mat2)
{
	int		i;
	int		j;
	int		k;
	double	**matrix;

	matrix = ft_create_matrix();
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			k = 0;
			while (k < 3)
			{
				matrix[i][j] = matrix[i][j] + mat1[i][k] * mat2[k][j];
				k++;
			}
			j++;
		}
		i++;
	}
	return (matrix);
}
