/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:19:43 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/31 16:24:36 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	ssize_t		bytes;
	char		*line;
	char		*tmp;
	char		buf[BUFFER_SIZE + 1];
	static char	*buffers[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
}
