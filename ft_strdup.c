/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoysal <tsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:46:45 by tsoysal           #+#    #+#             */
/*   Updated: 2022/04/03 15:46:47 by tsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*twin;
	size_t	i;

	twin = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!twin)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		twin[i] = str[i];
		i++;
	}
	twin[i] = '\0';
	return (twin);
}
