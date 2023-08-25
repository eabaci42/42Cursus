/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:38:35 by eabaci            #+#    #+#             */
/*   Updated: 2023/03/03 09:42:14 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*red[256];
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	red[fd] = read_function(fd, red[fd]);
	if (!red[fd])
		return (NULL);
	str = apart_line(red[fd]);
	red[fd] = trim(red[fd]);
	return (str);
}

char	*read_function(int fd, char *red)
{
	char	*ptr;
	int		byte;

	ptr = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!ptr)
		return (0);
	byte = 1;
	while (!ft_strchr(red, '\n') && byte != 0)
	{
		byte = read(fd, ptr, BUFFER_SIZE);
		if (byte == -1)
		{
			free(ptr);
			free(red);
			return (0);
		}
		ptr[byte] = '\0';
		red = ft_strjoin(red, ptr);
	}
	free(ptr);
	return (red);
}

char	*apart_line(char *red)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!*(red + i))
		return (0);
	while (red[i] != '\n' && red[i] != '\0')
		i++;
	if (red[i] == '\n')
		ptr = ft_substr(red, 0, i + 1);
	else
		ptr = ft_substr(red, 0, i);
	if (!ptr)
		return (0);
	return (ptr);
}

char	*trim(char *red)
{
	char	*temp;
	int		i;

	i = 0;
	while (red[i] && red[i] != '\n')
		i++;
	if (!red[i])
	{
		free(red);
		return (0);
	}
	i++;
	temp = ft_substr(red, i, (ft_strlen(red) - i));
	if (!temp)
		return (0);
	free(red);
	return (temp);
}
