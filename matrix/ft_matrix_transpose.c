/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_transpose.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 10:34:49 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/28 10:44:16 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double		*ft_matrix_transpose(double *src)
{
	double	**mat;
	int		i;
	int		j;

	mat = ft_create_matrix();
	if (mat)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				mat[i][j] = src[j][i];
				j++;
			}
			i++;
		}
		return (mat);
	}
	return (NULL);
}
