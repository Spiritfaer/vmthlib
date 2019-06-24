/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_3d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 23:26:02 by istalevs          #+#    #+#             */
/*   Updated: 2018/05/13 18:13:00 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vmth.h"

t_v3d	vec_3d(double_t x, double_t y, double_t z)
{
	t_v3d	new;

	new = (t_v3d){x, y, z};
	return (new);
}