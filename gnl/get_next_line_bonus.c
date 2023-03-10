/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:30:36 by victofer          #+#    #+#             */
/*   Updated: 2023/03/10 12:15:18 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_join_free(char *buffer, char *buff)
{
	char	*aux;

	aux = ft_strjoin_gnl(buffer, buff);
	free(buffer);
	return (aux);
}

char	*save_rest(char *rest)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (rest[i] && rest[i] != '\n')
		i++;
	if (!rest[i])
	{
		free(rest);
		return (NULL);
	}
	line = ft_calloc_gnl((ft_strlen_gnl(rest) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (rest[i])
		line[j++] = rest[i++];
	free(rest);
	return (line);
}

char	*get_line_gnl(char *rest)
{
	int		i;
	char	*line;

	i = 0;
	if (!rest[i])
		return (NULL);
	while (rest[i] && rest[i] != '\n')
		i++;
	line = ft_calloc_gnl(i + 2, sizeof(char));
	i = 0;
	while (rest[i] && rest[i] != '\n')
	{
		line[i] = rest[i];
		i++;
	}
	if (rest[i] && rest[i] == '\n')
	{
		line[i++] = '\n';
	}
	return (line);
}

char	*ft_read(int fd, char *str)
{
	char		*buffer;
	int			read_bytes;

	if (!str)
		str = ft_calloc_gnl(1, 1);
	buffer = ft_calloc_gnl((BUFFER_SIZE + 1), sizeof(char));
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		str = ft_join_free(str, buffer);
		if (ft_strchr_gnl(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	char		*line;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = ft_read(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	line = get_line_gnl(str[fd]);
	str[fd] = save_rest(str[fd]);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
