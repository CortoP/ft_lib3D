/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 16:07:59 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/28 13:56:42 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT3D_H
# define LIBFT3D_H

/*
**
****
***		INCLUDES
****
**
*/

# include <math.h>
# include <libft.h>

/*
**
****
***		DEFINES
****
**
*/

# define X coord[0]
# define Y coord[1]
# define Z coord[2]
# define ft_vectorial_product ft_cross_product
# define ft_scalar_product ft_dot_product
# define t_dot t_vect

/*
**
***
**		STRUCTURES
***
**
*/

typedef struct		s_vect
{
	double			coord[3];
}					t_vect;

/*
**
****
***		FUNCTIONS
****
**
*/

double			**ft_create_matrix(void);
double			**ft_mult_matrix(double **mat1, double **mat2);

t_vect			*ft_add_vectors(t_vect *v1, t_vect *v2);
t_vect			*ft_cross_product(t_vect *u, t_vect *v);
t_vect			*ft_div_vector(t_vect *v, double k);
t_vect			*ft_create_vector(double x, double y, double z);
double			ft_get_magnitude(t_vect *v);
t_vect			*ft_mult_vector(t_vect *v, double k);
t_vect			*ft_normalize(t_vect *vect);
double			ft_dot_product(t_vect *u, t_vect *v);
t_vect			*ft_str_to_vect(char *s);
t_vect			*ft_sub_vectors(t_vect *v1, t_vect *v2);

#endif /* !LIBFT3D_H */
