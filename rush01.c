/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 09:43:32 by abaur             #+#    #+#             */
/*   Updated: 2019/08/03 12:02:49 by jokaruk-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_draw_cube(int width, int height, char *skin);

void	rush(int width, int height)
{
	char skin[6];

	skin[0] = '/';
	skin[1] = '\\';
	skin[2] = '\\';
	skin[3] = '/';
	skin[4] = '*';
	skin[5] = '*';
	ft_draw_cube(width, height, skin);
}
