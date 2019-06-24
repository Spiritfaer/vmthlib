/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_2i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:40:38 by istalevs          #+#    #+#             */
/*   Updated: 2018/05/13 18:13:17 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vmth.h"

t_v2i		vec_2i(t_v2d vec)
{
	t_v2i	new;

	new = (t_v2i){(int)vec.x, (int)vec.y};
	return (new);
}
