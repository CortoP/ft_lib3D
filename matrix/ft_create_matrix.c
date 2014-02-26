/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 14:24:21 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/26 14:27:55 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

double		**ft_create_matrix(void)
{
	double	**matrix;
	int		i;
	int		j;

	matrix = (double **)malloc(sizeof(double *) * 3);
	if (matrix)
	{
		i = 0;
		while (i < 3)
		{
			matrix[i] = (double *)malloc(sizeof(double) * 3);
			if (matrix[i])
			{
				j = 0;
				while (j < 3)
				{
					matrix[i][j] = 0;
					j++;
				}
			}
			i++;
		}
		return (matrix);
	}
	return (NULL);
}
