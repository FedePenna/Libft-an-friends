/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:47:29 by fepennar          #+#    #+#             */
/*   Updated: 2024/12/09 17:49:51 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int l)
{
	if (l >= 65 && l <= 90)
		l += 32;
	return (l);
}
