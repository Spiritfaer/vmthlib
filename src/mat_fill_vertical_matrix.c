/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_fill_vertical_matrix.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 18:50:42 by istalevs          #+#    #+#             */
/*   Updated: 2019/06/07 18:51:02 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vmth.h"

void			fill_vertical_matrix(t_matrix *m)
{
	int32_t		i;

	i = 0;
	if (!m || !m->matrix)
		return ;
	while (i < m->size)
	{
		m->matrix[i][i] = 1.0;
		i++;
	}
}
