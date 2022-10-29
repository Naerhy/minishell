/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_1d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:41:50 by bmayer            #+#    #+#             */
/*   Updated: 2021/10/01 10:42:16 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_free_1d(char **to_free)
{
	if (*to_free != NULL)
	{
		free(*to_free);
		*to_free = NULL;
	}
}