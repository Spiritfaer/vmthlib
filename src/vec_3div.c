/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_3div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 18:49:13 by istalevs          #+#    #+#             */
/*   Updated: 2019/06/07 18:49:20 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vmth.h"

t_v3d	vec_3div(t_v3d v1, t_v3d v2)
{
	t_v3d	res;

	res.x = v1.x / v2.x;
	res.y = v1.y / v2.y;
	res.z = v1.z / v2.z;
	return (res);
}
