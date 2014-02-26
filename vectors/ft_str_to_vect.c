/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_vect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 09:43:46 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/26 11:07:58 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

/*
**	if s :  double, double, double
**	double = [-] & [0 - 9] & [.]
 */

char			ft_iscoord(char *s, int i)
{
	if (ft_isdigit(s[i]) == 1 || s[i] == '-' ||
		(s[i] == '.' && s[i - 1] && ft_isdigit(s[i - 1]) == 1 
		 && s[i + 1] && ft_isdigit(s[i + 1]) == 1))
		return (1);
	return (0);
}

t_vect			*ft_str_to_vect(char *s)
{
	t_vect		*v;
	int			i;

	v = ft_create_vector(0, 0, 0);
	i = 0;
	while (ft_isdigit(s[i]) == 0 && s[i] != '-')
		i++;
	v->X = (double)ft_atod(s + i);
	while (ft_iscoord(s, i) == 1)
		i++;
	while (ft_isdigit(s[i]) == 0 && s[i] != '-')
		i++;
	v->Y = (double)ft_atod(s + i);
	while (ft_iscoord(s, i) == 1)
		i++;
	while (ft_isdigit(s[i]) == 0 && s[i] != '-')
		i++;
	v->Z = (double)ft_atod(s + i);
	return (v);
}
