/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_get_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 18:55:45 by istalevs          #+#    #+#             */
/*   Updated: 2019/06/07 19:37:58 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vmth.h"

double			**get_new_m(uint8_t n)
{
	double_t	**n_m;
	int32_t		i;

	n_m = NULL;
	i = 0;
	if (n > 1)
	{
		if ((n_m = (double_t**)malloc(sizeof(double_t*) * n)) != NULL)
		{
			while (i < n)
			{
				if (!(*(n_m + i) = (double_t*)malloc(sizeof(double_t) * n)))
				{
					while (--i >= 0)
						free(*(n_m + i));
					free(n_m);
					n_m = NULL;
					return (NULL);
				}
				memset(*(n_m + i), 0, sizeof(double_t) * n);
				i++;
			}
		}
	}
	return (n_m);
}

t_matrix		*get_new_matrix(uint8_t n)
{
	t_matrix	*m_new;

	m_new = NULL;
	if ((m_new = (t_matrix*)malloc(sizeof(t_matrix))) == NULL)
		return (NULL);
	memset(m_new, 0, sizeof(t_matrix));
	if (n > 1)
	{
		m_new->inv_matrix = NULL;
		m_new->size = n;
		m_new->matrix = get_new_m(m_new->size);
	}
	if (m_new->matrix == NULL)
	{
		m_new->size = 0;
		free(m_new);
	}
	return (m_new);
}
